#include<iostream>
using namespace std;

// Base class
class Student {
protected:
    int rollNo;
public:
    void getRollNo(int r) {
        rollNo = r;
    }
    void displayRollNo() {
        cout << "Roll No: " << rollNo << endl;
    }
};

// Derived class 1 from Student
class Test : public Student {
protected:
    float marks1, marks2;
public:
    void getMarks(float m1, float m2) {
        marks1 = m1;
        marks2 = m2;
    }
    void displayMarks() {
        cout << "Marks 1: " << marks1 << ", Marks 2: " << marks2 << endl;
    }
};

// Another class
class Sports {
protected:
    float score;
public:
    void getScore(float s) {
        score = s;
    }
    void displayScore() {
        cout << "Sports Score: " << score << endl;
    }
};

// Hybrid Inheritance: Derived from Test and Sports
class Result : public Test, public Sports {
public:
    void displayResult() {
        float total = marks1 + marks2 + score;
        displayRollNo();
        displayMarks();
        displayScore();
        cout << "Total Score: " << total << endl;
    }
};

int main() {
    Result r;
    r.getRollNo(101);
    r.getMarks(85.5, 90.0);
    r.getScore(8.5);
    r.displayResult();
    return 0;
}
