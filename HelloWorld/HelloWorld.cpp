// HelloWorld.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>
#include "student.hpp"
using namespace std;
void test01();

template <class T>
void myPrint(T & t);


int main()
{
	test01();

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

	myPrint(sv);



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
