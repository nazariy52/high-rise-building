#include "Person.h"
using namespace std;

Person::Person() : name(nullptr) {}

Person::Person(const char* name) {
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}

Person::Person(const Person& other) {
    name = new char[strlen(other.name) + 1];
    strcpy(name, other.name);
}

Person& Person::operator=(const Person& other) {
    if (this != &other) {
        delete[] name;
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
    }
    return *this;
}

Person::~Person() {
    delete[] name;
}

void Person::display() const {
    cout << "name: " << (name ? name : "???") << endl;
}

void Person::setName(const char* name) {
    delete[] this->name;
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}

const char* Person::getName() const {
    return name;
}
