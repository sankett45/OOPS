/***********************************************************
 Q1. Demonstrate default constructor and destructor
***********************************************************/
#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Default Constructor Called" << endl;
    }
    ~Demo() {
        cout << "Destructor Called" << endl;
    }
};

// int main() {
//     Demo d;
//     return 0;
// }

/***********************************************************
 Q2. Function overloading to calculate area of square & rectangle
***********************************************************/
#include <iostream>
using namespace std;

class Area {
public:
    int calc(int a) { return a * a; }
    int calc(int l, int b) { return l * b; }
};

// int main() {
//     Area obj;
//     cout << "Area of Square (side=5): " << obj.calc(5) << endl;
//     cout << "Area of Rectangle (5x6): " << obj.calc(5,6) << endl;
//     return 0;
// }

/***********************************************************
 Q3. Constructor Overloading: Initialize values in different ways
***********************************************************/
#include <iostream>
using namespace std;

class Student {
    string name;
    int age;
public:
    Student() {
        name = "Unknown";
        age = 0;
    }
    Student(string n) {
        name = n;
        age = 0;
    }
    Student(string n, int a) {
        name = n;
        age = a;
    }
    void show() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// int main() {
//     Student s1;
//     Student s2("Rahul");
//     Student s3("Neha", 21);
//     s1.show();
//     s2.show();
//     s3.show();
//     return 0;
// }

/***********************************************************
 Q4. Single Inheritance Example
***********************************************************/
#include <iostream>
using namespace std;

class Person {
public:
    string name;
    void setName(string n) { name = n; }
};

class StudentInherit : public Person {
public:
    int roll;
    void setRoll(int r) { roll = r; }
    void display() {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }
};

// int main() {
//     StudentInherit s;
//     s.setName("Amit");
//     s.setRoll(101);
//     s.display();
//     return 0;
// }

/***********************************************************
 Q5. Multiple Inheritance Example
***********************************************************/
#include <iostream>
using namespace std;

class A {
public:
    void showA() { cout << "Class A" << endl; }
};
class B {
public:
    void showB() { cout << "Class B" << endl; }
};
class C : public A, public B {
public:
    void showC() { cout << "Class C" << endl; }
};

// int main() {
//     C obj;
//     obj.showA();
//     obj.showB();
//     obj.showC();
//     return 0;
// }

/***********************************************************
 Q6. Multilevel Inheritance Example
***********************************************************/
#include <iostream>
using namespace std;

class Grandparent {
public:
    void gp() { cout << "I am Grandparent" << endl; }
};
class Parent : public Grandparent {
public:
    void p() { cout << "I am Parent" << endl; }
};
class Child : public Parent {
public:
    void c() { cout << "I am Child" << endl; }
};

// int main() {
//     Child ch;
//     ch.gp();
//     ch.p();
//     ch.c();
//     return 0;
// }

/***********************************************************
 Q7. Static Data Members and Functions
***********************************************************/
#include <iostream>
using namespace std;

class Counter {
    static int count;
public:
    Counter() { count++; }
    static void showCount() {
        cout << "Objects created: " << count << endl;
    }
};
int Counter::count = 0;

// int main() {
//     Counter c1, c2, c3;
//     Counter::showCount();
//     return 0;
// }

/***********************************************************
 Q8. Friend Function Example
***********************************************************/
#include <iostream>
using namespace std;

class Box {
    int width;
public:
    Box(int w) { width = w; }
    friend void showWidth(Box b);
};
void showWidth(Box b) {
    cout << "Width = " << b.width << endl;
}

// int main() {
//     Box b(20);
//     showWidth(b);
//     return 0;
// }

/***********************************************************
 Q9. Operator Overloading Example (+)
***********************************************************/
#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r=0, int i=0) {
        real = r; imag = i;
    }
    Complex operator + (Complex const &obj) {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print() {
        cout << real << " + " << imag << "i" << endl;
    }
};

// int main() {
//     Complex c1(3,4), c2(1,2);
//     Complex c3 = c1 + c2;
//     c3.print();
//     return 0;
// }

/***********************************************************
 Q10. Virtual Function Example (Polymorphism)
***********************************************************/
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() { cout << "Base class" << endl; }
};
class Derived : public Base {
public:
    void show() { cout << "Derived class" << endl; }
};

// int main() {
//     Base *b;
//     Derived d;
//     b = &d;
//     b->show();
//     return 0;
// }

/***********************************************************
 Q11. Abstract Class and Pure Virtual Function Example
***********************************************************/
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0; // pure virtual
};
class Circle : public Shape {
public:
    void draw() { cout << "Drawing Circle" << endl; }
};
class Square : public Shape {
public:
    void draw() { cout << "Drawing Square" << endl; }
};

// int main() {
//     Shape* s;
//     Circle c;
//     Square sq;
//     s = &c;
//     s->draw();
//     s = &sq;
//     s->draw();
//     return 0;
// }

/***********************************************************
 Q12. File Handling Example
***********************************************************/
#include <iostream>
#include <fstream>
using namespace std;

// int main() {
//     ofstream fout("test.txt");
//     fout << "Hello File Handling";
//     fout.close();
//
//     ifstream fin("test.txt");
//     string line;
//     while(getline(fin, line)) {
//         cout << line << endl;
//     }
//     fin.close();
//     return 0;
// }
