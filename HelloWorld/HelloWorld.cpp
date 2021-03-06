// HelloWorld.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include "student.hpp"
#include "mycompare.hpp"
using namespace std;
void test01();
void test02();
void test03();

template <class T>
void myPrint(T & t);

template <class T>
bool myGreater(T v1, T v2);

bool stuCompare(Student & s1, Student & s2);

int main()
{
	test01();
//	test02();
//	test03();

	cout << "test github on vs" << endl;
    std::cout << "Hello World!\n"; 
	
	return 0;
}



void test01() {
	Student s1("LiMing", 89, 172);
	Student s2("DaMing", 79, 182);
	Student s3("XiaoMing", 95, 170);
	Student s4("XiaoQiang", 78, 166);
	Student s5("XiaoHua", 90, 168);
	
	vector<Student> sv;
	sv.push_back(s1);
	sv.push_back(s2);
	sv.push_back(s3);
	sv.push_back(s4);
	sv.push_back(s5);
	
	sort(sv.begin(), sv.end(), MyCompare());
//	sort(sv.begin(), sv.end(), stuCompare);
	myPrint(sv);
	auto num = s5.getStuNums();
	auto num2 = Student::getStuNums();
	cout << "the number of the students is " << s5.getStuNums() << endl;
}

void test02() {
	set<int> s;
	s.insert(3);
	s.insert(5);
	s.insert(1);
	s.insert(2);
	s.insert(7);
	s.insert(9);
	s.insert(4);
	myPrint(s);

}

void test03() {
	vector<float> vf;
	vf.push_back(1.2f);
	vf.push_back(1.3f);
	vf.push_back(1.09f);
	vf.push_back(4.2f);
	vf.push_back(3.21f);
	vf.push_back(0.2f);

	sort(vf.begin(), vf.end(), myGreater<float>);
//	sort(vf.begin(), vf.end());
	myPrint(vf);

}


template <class T>
bool myGreater(T v1, T v2) {
	return v1 > v2;
}

bool stuCompare(Student &s1, Student &s2) {
	if (s1.getScore() == s2.getScore()) {
		return s1.getHeight() > s2.getHeight();
	}
	else {
		return s1.getScore() > s2.getScore();
	}
}


template <class T>
void myPrint(T & t) {
	auto it = t.begin();
	for (; it != t.end(); ++it)
		cout << *it << endl;
}


// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
