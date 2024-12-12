#include "Apartment.h"
#include <iostream>
using namespace std;

Apartment::Apartment() : residents(nullptr), capacity(0), count(0) {}

Apartment::Apartment(int capacity) : capacity(capacity), count(0) {
    residents = new Person[capacity];
}

Apartment::Apartment(const Apartment& other) : capacity(other.capacity), count(other.count) {
    residents = new Person[capacity];
    for (int i = 0; i < count; ++i) {
        residents[i] = other.residents[i];
    }
}

Apartment& Apartment::operator=(const Apartment& other) {
    if (this != &other) {
        delete[] residents;
        capacity = other.capacity;
        count = other.count;
        residents = new Person[capacity];
        for (int i = 0; i < count; ++i) {
            residents[i] = other.residents[i];
        }
    }
    return *this;
}

Apartment::~Apartment() {
    delete[] residents;
}

void Apartment::addResident(const Person& person) {
    if (count < capacity) {
        residents[count++] = person;
    }
    else {
        cout << "apartment is full" << endl;
    }
}

void Apartment::display() const {
    cout << "residents of apartment (" << count << "/" << capacity << "):" << endl;
    for (int i = 0; i < count; ++i) {
        residents[i].display();
    }
}
