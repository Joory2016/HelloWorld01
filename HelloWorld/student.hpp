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
	//friend ostream & operator<<(ostream & os, Student &s) {
	//	os << "Name: " << s.name << ", score: " << s.score << ", height: " << s.height << endl;
	//	return os;
	//}

	friend ostream &operator<<(ostream &os, Student &s);

	static int getStuNums();

private:
	string name;
	int score;
	float height;
	static int nums;		//count the numnber of the students
};

ostream &operator<<(ostream &os, Student &s) {
	os << "Name: " << s.name << ", score: " << s.score << ", height: " << s.height << endl;
	return os;
}


int Student::nums = 0;

int inline Student::getStuNums() {
	return nums;
}

Student::Student(string sname,int sscore,float sheight) {
	nums++;
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
