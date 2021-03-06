// test_map_list.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <map>
#include <set>
#include <list>
#include <string>
#include "mycompa.hpp"
#include "person.hpp"
void makePair();
void test_set();
void test03();
void test04();
void test05();
void test06();
template <class T>
void myPrint(T &t);


using namespace std;

int main()
{
//	makePair();
//	test_set();
//	test03();
//	test04();
//	test05();
	test06();

    std::cout << "Hello World!\n"; 
	return 0;
}

void makePair() {
	pair<string, int> p(string("Tom"), 16);
	cout << "the name is " << p.first << ", age is " << p.second << endl;

	pair<string, int> p2 = make_pair("DaMing", 18);
	cout << "the name is " << p2.first << ", age is " << p2.second << endl;
}

void test_set() {
	set<int> s;
	auto ret1 = s.insert(10);
	pair<set<int>::iterator,bool> ret= s.insert(10);
	if (ret1.second) {
		cout << "the first 10 insert successfully" << endl;
	}
	else
		cout << "the first 10 insert fail" << endl;

	if (ret.second) {
		cout << "the second 10 insert successfully" << endl;
	}
	else
		cout << "the second 10 insert fail" << endl;
	myPrint(s);
}

void test03() {
	set<int, MyCompa<int> > ss;
	ss.insert(2);
	ss.insert(5);
	ss.insert(4);
	ss.insert(7);
	ss.insert(1);
	
	myPrint(ss);

}

void test04() {

	Person p1("DaWa", 100);
	Person p2("LiuWa", 40);
	Person p3("ErWa", 80);
	Person p4("WuWa", 50);
	Person p5("SanWa", 70);
	
/*  failed
	set<Person> sp;
	sp.insert(p1);
	sp.insert(p2);
	sp.insert(p3);

*/

	set<Person, MyComparePerson> ssp;
	ssp.insert(p1);
	ssp.insert(p2);
	ssp.insert(p3);
	ssp.insert(p4);
	ssp.insert(p5);
	myPrint(ssp);

}


void test05() {
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	
	m.insert(make_pair(2, 20));

	m.insert(map<int, int>::value_type(3, 30));

	m[4] = 40;

	for (map<int, int>::iterator it = m.begin(); it != m.end(); ++it) {
		cout << "key = " << it->first << ", value = " << it->second << endl;
	}

	m[5];
	m.erase(3);

	for (map<int, int>::iterator it = m.begin(); it != m.end(); ++it) {
		cout << "key = " << it->first << ", value = " << it->second << endl;
	}

	int num = m.count(2);
	cout << "the num of 2 is " << num << endl;

	//lower_bound  upper_bound

	pair<map<int, int>::iterator, map<int, int>::iterator> ret = m.equal_range(3);
	if (ret.first != m.end())
		cout << "using equal to find the lower_bound, key = " << ret.first->first << ", value = " << ret.first->second << endl;
	else
		cout << "find no thing" << endl;
	if (ret.second != m.end())
		cout << "using equal to find the lower_bound, key = " << ret.second->first << ", value = " << ret.second->second << endl;
	else
		cout << "find no thing" << endl;

}

void test06() {
	map<int, int, MyCompa<int> > p;
	p.insert(make_pair(2, 20));
	p.insert(make_pair(6, 60));
	p.insert(pair<int, int>(3, 30));
	p.insert(make_pair(7, 90));
	p.insert(make_pair(5, 80));

	for (map<int, int>::iterator it = p.begin(); it != p.end(); ++it) {
		cout << "key = " << it->first << ", value = " << it->second << endl;
	}


}


template <class T>
void myPrint(T &t) {
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
