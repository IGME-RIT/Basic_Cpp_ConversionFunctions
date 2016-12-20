#pragma once
class Person {
public:
	Person(int i);  // constructor
	operator int() const;  // operator overloading
	int getID() const;     // member function
private:
	int id;  // private data member
};

