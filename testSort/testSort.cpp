// testSort.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>
#include <ctime>

using namespace std;

void test01() {
	vector<int> v1;
	vector<int> v2;

	for (int i = 1; i < 10;i+=2) {
		v1.push_back(i);
	}
	
	for (int i = 0; i < 20; i += 2)
		v2.push_back(i);

	vector<int> vTarget;
	vTarget.resize(v1.size() + v2.size());

	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

	for_each(vTarget.begin(), vTarget.end(), [](int v) {cout << v << " "; });
	

}

void test02() {
	vector<int> v;
	for (int i = 1; i < 10; i++)
		v.push_back(i);

	//洗牌算法
	random_shuffle(v.begin(), v.end());
	
	for_each(v.begin(), v.end(), [](int v) {cout << v << " "; });
	cout << endl;
	sort(v.begin(), v.end(), greater<int>());

	for_each(v.begin(), v.end(), [](int v) {cout << v << " "; });

}


void test03() {
	vector<int> v{ 9,8,5,6,7,3,4,2,1 };
	for_each(v.begin(), v.end(), [](int v) {cout << v << " "; });
	string s{ "asdfg" };
	cout << endl;
	cout << s << endl;
	string s1("12345");
	cout << s1 << endl;
	sort(v.begin(), v.end(), [](const int v1,const int v2) {return v1 > v2; });
	for_each(v.begin(), v.end(), [](int v) {cout << v << " "; });
	cout << endl;
	sort(v.begin(), v.end(), [](const int v1, const int v2) {return v1 < v2; });
	for_each(v.begin(), v.end(), [](int v) {cout << v << " "; });
}



int main()
{
	srand((unsigned int)time(nullptr));

//	test01();
//	test02();
	test03();
	cout << endl;
    std::cout << "Hello World!\n"; 
	return 0;
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
