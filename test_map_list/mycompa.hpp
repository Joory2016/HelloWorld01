#ifndef MYCOMPA_H_
#define MYCOMPA_H_
#include "person.hpp"

template <typename T>
class MyCompa {
public:
	bool operator()(T t1,T t2) {
		return t1 > t2;
	}
};


class MyComparePerson {
public:
	bool operator()(const Person & p1, const Person & p2) {
		return p1.getAge() > p2.getAge();
	}
};

#endif // !MYCOMPA_H_

