#ifndef APARTMENT_H
#define APARTMENT_H

#include "Person.h"

class Apartment {
    Person* residents;
    int capacity;
    int count;

public:
    Apartment();
    explicit Apartment(int capacity);
    Apartment(const Apartment& other);
    Apartment& operator=(const Apartment& other);

    ~Apartment();

    void addResident(const Person& person);
    void display() const;
};

#endif //APARTMENT_H
