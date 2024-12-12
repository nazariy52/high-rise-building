#ifndef BUILDING_H
#define BUILDING_H

#include "Apartment.h"

class Building {
    Apartment* apartments;
    int count;

public:
    Building();
    explicit Building(int count);
    Building(const Building& other);
    Building& operator=(const Building& other);

    ~Building();

    Apartment& getApartment(int index);
    void display() const;
};

#endif //BUILDING_H
