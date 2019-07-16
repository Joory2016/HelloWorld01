// testAlgorithmTester.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "testAlgotithm.hpp"
#include "generator.hpp"
using namespace std;

int main()
{
	//for (int i = 10; i <= 26; i++) {
	//	int n = pow(2, i);
	//	int *arr = MyUtil::generateRandomArray(n, 0, 100000000);
	//	clock_t startTime = clock();
	//	int number = 0;
	//	testAlgotithm::findMax(arr, n, number);
	//	clock_t endTime = clock();
	//	cout << "data size 2^" << i << " = " << n << "\t";
	//	cout << "Time cost: " << double(endTime - startTime) / CLOCKS_PER_SEC << ", and number is "<<number<< endl;
	//	delete[] arr;
	//}


	//for (int i = 10; i <= 16; i++) {
	//	int n = pow(2, i);
	//	int *arr = MyUtil::generateRandomArray(n, 0, 100000000);	//O(n^2)

	//	clock_t startTime = clock();
	//	int number = 0;
	//	testAlgotithm::selectionSort(arr, n);
	//	clock_t endTime = clock();
	//	cout << "data size 2^" << i << " = " << n << "\t";
	//	cout << "Time cost: " << double(endTime - startTime) / CLOCKS_PER_SEC  << endl;
	//	delete[] arr;
	//}

	cout << "Test for binarySearch:" << endl;
	for (int i = 10; i <= 28; i++) {
		int n = pow(2, i);
		int *arr = MyUtil::generateOrderedArray(n);	

		clock_t startTime = clock();
		int number = 0;
		testAlgotithm::binarySearch(arr, n, 0);
		clock_t endTime = clock();
		cout << "data size 2^" << i << " = " << n << "\t";
		cout << "Time cost: " << double(endTime - startTime) / CLOCKS_PER_SEC << endl;
		delete[] arr;
	}


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
