#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <cstring>

class Person {
    char* name; 

public:
    Person();
    explicit Person(const char* name);
    Person(const Person& other);
    Person& operator=(const Person& other);

    ~Person();

    void display() const;
    void setName(const char* name);
    const char* getName() const;
};

#endif //PERSON_H