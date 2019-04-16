#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>
#include <ostream>
using namespace std;

class Student {
public:
	Student() = default;
	Student(string sname, int sscore, float sheight);
	int getScore();
	float getHeight();
	friend ostream & operator<<(ostream & os, Student &s) {
		os << "Name: " << s.name << ", score: " << s.score << ", height: " << s.height << endl;
		return os;
	}

private:
	string name;
	int score;
	float height;
	
};

Student::Student(string sname,int sscore,float sheight) {
	name = sname;
	score = sscore;
	height = sheight;
}

int Student::getScore() {
	return score;
}

float Student::getHeight() {
	return height;
}

#endif // !STUDENT_H_
