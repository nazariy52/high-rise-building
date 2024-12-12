#include "Building.h"
#include <iostream>
using namespace std;

Building::Building() : apartments(nullptr), count(0) {}

Building::Building(int count) : count(count) {
    apartments = new Apartment[count];
}

Building::Building(const Building& other) : count(other.count) {
    apartments = new Apartment[count];
    for (int i = 0; i < count; ++i) {
        apartments[i] = other.apartments[i];
    }
}

Building& Building::operator=(const Building& other) {
    if (this != &other) {
        delete[] apartments;
        count = other.count;
        apartments = new Apartment[count];
        for (int i = 0; i < count; ++i) {
            apartments[i] = other.apartments[i];
        }
    }
    return *this;
}

Building::~Building() {
    delete[] apartments;
}

Apartment& Building::getApartment(int index) {
    return apartments[index];
}

void Building::display() const {
    cout << "high-rise building with " << count << " apartments:" << endl;
    for (int i = 0; i < count; ++i) {
        cout << "apartment " << i + 1 << ":" << endl;
        apartments[i].display();
    }
}
