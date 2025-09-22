/***********************************************************
 Q13. LMS User Access System using Inheritance & Polymorphism
***********************************************************/
#include <iostream>
using namespace std;

// Base Class
class User {
public:
    virtual void accessPortal() {
        cout << "Generic User Access\n";
    }
    virtual ~User() {}
};

// Derived Class: Student
class Student : public User {
public:
    void accessPortal() override {
        cout << "Student: Can access course material and submit assignments.\n";
    }
};

// Derived Class: Teacher
class Teacher : public User {
public:
    void accessPortal() override {
        cout << "Teacher: Can upload lectures and grade assignments.\n";
    }
};

// Derived Class: Administrator
class Administrator : public User {
public:
    void accessPortal() override {
        cout << "Administrator: Can manage users and monitor system activities.\n";
    }
};

// int main() {
//     User* u;
//
//     Student s;
//     Teacher t;
//     Administrator a;
//
//     // Polymorphic behavior
//     u = &s;
//     u->accessPortal();
//
//     u = &t;
//     u->accessPortal();
//
//     u = &a;
//     u->accessPortal();
//
//     return 0;
// }
