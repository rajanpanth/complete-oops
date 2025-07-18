// // one base, multiple derived classes
// #include<iostream>
// using namespace std;
// class cricket{
//     public:
//     string team1;
//     string team2;
//     void getdatacricket(){
//         cout<<"Enter team 1: "<<endl;
//         cin>>team1;
//         cout<<"Enter team 2: "<<endl;
//         cin>>team2;
//     }
//     void cricketdisplay(){
//         cout<<"Team 1: "<<team1<<endl;
//         cout<<"Team 2: "<<team2<<endl;
//     }
// };
// class t20: public cricket{
//     public:
//     int winningStikeRate1;
//     int winningStikeRate2;
   
//     void getdatat20(){
//          cricketdisplay();
//         cout<<"Enter winning strike rate of team 1: "<<endl;
//         cin>>winningStikeRate1;
//         cout<<"Enter winning strike rate of team 2: "<<endl;
//         cin>>winningStikeRate2;
//     }
//     void t20display(){
//         cout<<"Winning strike rate of team 1: "<<winningStikeRate1<<endl;
//         cout<<"Winning strike rate of team 2: "<<winningStikeRate2<<endl;
//     }

// };
// class test: public cricket{
//     public:
//     int winningStrikeRate3;
//     int winningStrikeRate4;
   
//     void getdatatest(){
//          cricketdisplay();
//         cout<<"Enter winning strike rate of team 1 in test: "<<endl;
//         cin>>winningStrikeRate3;
//         cout<<"Enter winning strike rate of team 2 in test: "<<endl;
//         cin>>winningStrikeRate4;
//     }
//     void testdisplay(){
//         cout<<"Winning strike rate of team 1 in test: "<<winningStrikeRate3<<endl;
//         cout<<"Winning strike rate of team 2 in test: "<<winningStrikeRate4<<endl;
//     }
// };
// int main() {
//     test t;
//     t.cricketdisplay();
//     t.getdatacricket();
//     t.getdatatest();
//     t.testdisplay();
    
//     t20 t20obj;
//     t20obj.cricketdisplay();
//     t20obj.getdatacricket();
//     t20obj.getdatat20();
//     t20obj.t20display();
//     return 0;
// }


#include <iostream>
using namespace std;

// Base Class
class CricketMatch {
protected:
    string team1, team2;

public:
    CricketMatch(string t1, string t2) {
        team1 = t1;
        team2 = t2;
    }

    void displayTeams() const {
        cout << "\nTeam 1: " << team1 << "\nTeam 2: " << team2 << endl;
    }
};

// Derived Class 1: T20 Match
class T20Match : public CricketMatch {
private:
    int strikeRate1, strikeRate2;

public:
    T20Match(string t1, string t2, int sr1, int sr2)
        : CricketMatch(t1, t2), strikeRate1(sr1), strikeRate2(sr2) {}

    void displayT20Stats() const {
        cout << "\n--- T20 Match Stats ---";
        displayTeams();
        cout << "Team 1 Strike Rate: " << strikeRate1 << endl;
        cout << "Team 2 Strike Rate: " << strikeRate2 << endl;
    }
};

// Derived Class 2: Test Match
class TestMatch : public CricketMatch {
private:
    int strikeRate1, strikeRate2;

public:
    TestMatch(string t1, string t2, int sr1, int sr2)
        : CricketMatch(t1, t2), strikeRate1(sr1), strikeRate2(sr2) {}

    void displayTestStats() const {
        cout << "\n--- Test Match Stats ---";
        displayTeams();
        cout << "Team 1 Strike Rate: " << strikeRate1 << endl;
        cout << "Team 2 Strike Rate: " << strikeRate2 << endl;
    }
};


int main() {
  
    TestMatch test("India", "Australia", 55, 60);
    test.displayTestStats();

    T20Match t20("India", "Australia", 145, 150);
    t20.displayT20Stats();

    return 0;
}
