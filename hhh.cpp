#include "Building.h"

int main() {
    Building building(2);

    Apartment& apt1 = building.getApartment(0);
    apt1.addResident(Person("sanya eshkere"));
    apt1.addResident(Person("mashka lyashka"));

    Apartment& apt2 = building.getApartment(1);
    apt2.addResident(Person("adolf stalin"));

    building.display();

}
