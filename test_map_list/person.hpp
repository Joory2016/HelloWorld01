#pragma once
#include <string>
#include <ostream>
using namespace std;

class Person {
public:
	Person() {  }
	Person(string sname, int sage) :name(sname), age(sage) {  }
	string getName() const{
		return name;
	}
	int getAge() const{
		return age;
	}

	friend ostream &operator<<(ostream &os, Person p) {

		os << "the name is " << p.name << ", the age is " << p.age << endl;
		return os;
	}


private:

	string name;
	int age;
};
