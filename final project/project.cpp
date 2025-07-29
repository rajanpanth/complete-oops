#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <exception>

using namespace std;

// Base class for all entities with virtual destructor
class Entity {
protected:
    string name;
public:
    Entity(const string& n) : name(n) {}
    virtual ~Entity() {}
    virtual void display() const = 0;
};

// Item class inheriting from Entity
class Item : public Entity {
private:
    int value;
public:
    Item(const string& n, int v) : Entity(n), value(v) {}
    void display() const override {
        cout << name << " (Value: " << value << ")\n";
    }
    int getValue() const { return value; }
    const string& getName() const { return name; }
    // Operator overloading for combining items
    Item operator+(const Item& other) const {
        return Item(name + " + " + other.name, value + other.value);
    }
};

// Enemy class with virtual attack method
class Enemy : public Entity {
protected:
    int health;
public:
    Enemy(const string& n, int h) : Entity(n), health(h) {}
    virtual void attack() const = 0;
    int getHealth() const { return health; }
    void takeDamage(int d) { health -= d; }
    const string& getName() const { return name; }
};

// BossEnemy inheriting from Enemy
class BossEnemy : public Enemy {
public:
    BossEnemy(const string& n, int h) : Enemy(n, h) {}
    void attack() const override {
        cout << name << " launches a powerful strike!\n";
    }
    void display() const override {
        cout << name << " (Boss HP: " << health << ")\n";
    }
};

// Player class
class Player : public Entity {
private:
    int health;
    vector<Item> inventory;
public:
    Player(const string& n, int h) : Entity(n), health(h) {}
    void display() const override {
        cout << name << " (Health: " + to_string(health) + ")\nInventory: ";
        for (const auto& item : inventory) item.display();
    }
    void addItem(const Item& item) { inventory.push_back(item); }
    void takeDamage(int d) { health -= d; if (health < 0) health = 0; }
    int getHealth() const { return health; }
    const string& getName() const { return name; }
    const vector<Item>& getInventory() const { return inventory; }
    void clearInventory() { inventory.clear(); }
    // Template function for generic item addition
    template<typename T>
    void addGenericItem(T item) {
        try {
            if (inventory.size() >= 10) throw overflow_error("Inventory full!");
            inventory.push_back(static_cast<Item>(item));
        } catch (const exception& e) {
            cout << "Error: " << e.what() << endl;
        }
    }
};

// Room class
class Room {
private:
    string description;
    Enemy* enemy;
    vector<Room*> exits;
public:
    Room(const string& desc) : description(desc), enemy(nullptr) {}
    ~Room() { delete enemy; }
    void setEnemy(Enemy* e) { enemy = e; }
    void addExit(Room* r) { exits.push_back(r); }
    void display() const {
        cout << description << endl;
        if (enemy) enemy->display();
    }
    bool fight(Player& player) {
        if (enemy) {
            cout << "Fighting " << enemy->getHealth() << " HP " << enemy->getName() << "!\n";
            enemy->attack();
            player.takeDamage(10);
            enemy->takeDamage(15);
            if (enemy->getHealth() <= 0) {
                cout << enemy->getName() << " defeated!\n";
                delete enemy;
                enemy = nullptr;
                return true;
            }
            return false;
        }
        return true;
    }
    void saveGame(const string& filename, const Player& player) const {
        ofstream file(filename);
        if (file.is_open()) {
            file << player.getHealth() << "\n" << player.getName() << "\n";
            for (const auto& item : player.getInventory()) {
                file << item.getValue() << " " << item.getName() << "\n";
            }
            file.close();
        } else {
            throw runtime_error("Unable to open file for saving!");
        }
    }
    void loadGame(const string& filename, Player& player) {
        ifstream file(filename);
        if (file.is_open()) {
            int h;
            string n;
            file >> h >> n;
            player = Player(n, h);
            player.clearInventory();
            int v;
            string in;
            while (file >> v >> in) {
                player.addItem(Item(in, v));
            }
            file.close();
        } else {
            throw runtime_error("Unable to open file for loading!");
        }
    }
};

int main() {
    Room room1("You are in a dark forest.");
    Room room2("You enter a cave.");
    room1.addExit(&room2);
    room2.addExit(&room1);

    BossEnemy* boss = new BossEnemy("Cave Troll", 50);
    room2.setEnemy(boss);

    Player player("Hero", 100);
    player.addItem(Item("Sword", 20));
    player.addItem(Item("Shield", 15));

    cout << "Welcome to the Adventure Game!\n";
    room1.display();
    cout << "Moving to the cave...\n";
    room2.display();
    if (!room2.fight(player)) {
        cout << "Game Over! Health: " << player.getHealth() << endl;
        return 0;
    }

    try {
        room2.saveGame("game_save.txt", player);
        cout << "Game saved!\n";
        room2.loadGame("game_save.txt", player);
        cout << "Game loaded!\n";
        player.display();
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}