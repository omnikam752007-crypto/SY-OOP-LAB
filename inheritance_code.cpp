```cpp
#include <iostream>
using namespace std;

// 1. Single Inheritance
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

// 2. Multilevel Inheritance
class Puppy : public Dog {
public:
    void weep() {
        cout << "Puppy is weeping." << endl;
    }
};

// 3. Multiple Inheritance
class Father {
public:
    void showFather() {
        cout << "This is the Father class." << endl;
    }
};

class Mother {
public:
    void showMother() {
        cout << "This is the Mother class." << endl;
    }
};

class Child : public Father, public Mother {
public:
    void showChild() {
        cout << "This is the Child class." << endl;
    }
};

// 4. Hierarchical Inheritance
class Vehicle {
public:
    void start() {
        cout << "Vehicle is starting." << endl;
    }
};

class Car : public Vehicle {
public:
    void driveCar() {
        cout << "Car is being driven." << endl;
    }
};

class Bike : public Vehicle {
public:
    void rideBike() {
        cout << "Bike is being ridden." << endl;
    }
};

// 5. Hybrid Inheritance
class Person {
public:
    void showPerson() {
        cout << "This is the Person class." << endl;
    }
};

class Student : public Person {
public:
    void showStudent() {
        cout << "This is the Student class." << endl;
    }
};

class Sports : public Person {
public:
    void showSports() {
        cout << "This is the Sports class." << endl;
    }
};

class Result : public Student, public Sports {
public:
    void showResult() {
        cout << "This is the Result class." << endl;
    }
};

int main() {
    cout << "--- Single Inheritance ---" << endl;
    Dog d;
    d.eat();
    d.bark();

    cout << "\n--- Multilevel Inheritance ---" << endl;
    Puppy p;
    p.eat();
    p.bark();
    p.weep();

    cout << "\n--- Multiple Inheritance ---" << endl;
    Child c;
    c.showFather();
    c.showMother();
    c.showChild();

    cout << "\n--- Hierarchical Inheritance ---" << endl;
    Car car;
    car.start();
    car.driveCar();

    Bike bike;
    bike.start();
    bike.rideBike();

    cout << "\n--- Hybrid Inheritance ---" << endl;
    Result r;
    r.showStudent();
    r.showSports();
    r.showResult();
    r.showPerson();

    return 0;
}
```
