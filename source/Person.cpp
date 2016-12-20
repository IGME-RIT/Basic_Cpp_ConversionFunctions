#include "Person.h"


Person::Person(int i) : id(i) { }  // constructor

int Person::getID() const { return id; }  // member function

Person::operator int() const { return id; }  // conversion function
