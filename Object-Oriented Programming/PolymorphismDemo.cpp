#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() { cout << "Animal makes a sound" << endl; }
};

class Dog : public Animal {
public:
    void sound() override { cout << "Dog barks" << endl; }
};

class Cat : public Animal {
public:
    void sound() override { cout << "Cat meows" << endl; }
};

int main() {
    Animal *a1 = new Dog();
    Animal *a2 = new Cat();
    a1->sound();
    a2->sound();
    delete a1;
    delete a2;
    return 0;
}
