#ifndef MYCOMPARE_H_
#define MYCOMPARE_H_

#include "student.hpp"

class MyCompare {
public:
	bool operator()(Student s1, Student s2) {
		if (s1.getScore() == s2.getScore()) {
			return s1.getHeight() > s2.getHeight();
		}
		else {
			return s1.getScore() > s2.getScore();
		}
	}
};


#endif // !MYCOMPARE_H_

