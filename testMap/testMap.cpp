// testMap.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

//LeetCode NO.1
class Solution {			//using HashTable for two times
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		map<int, int> a;
		vector<int> res(2, -1);
		for (int i = 0; i < nums.size(); i++)
		{
			a.insert(make_pair(nums[i],i));
			//a.insert(map<int, int>::value_type(nums[i], i));
			//a.insert(pair<int, int>(nums[i], i));
		}
		for (int i = 0; i < nums.size(); i++)
		{
			if (a.count(target - nums[i]) > 0 && a[target - nums[i]] != i)
			{
				res[0] = i;
				res[1] = a[target - nums[i]];
				break;
			}
		}
		return res;
	}
};

class Solution2 {				//using hashTable for only one time
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		map<int, int> a;
		vector<int> res(2, -1);
		for (int i = 0; i < nums.size(); i++) {
			if (a.count(target - nums[i]) > 0) {
				res[1] = i;
				res[0] = a[target - nums[i]];
				break;
			}
			a[nums[i]] = i;
		}
		return res;
	}
};

ostream &operator<<(ostream &os, vector<int> v) {
	cout << "[" << v[0] << ", " << v[1] << "]" << endl;
	return os;
}

int main()
{
	//map<int, string> a;
	//map<int, string>::value_type s;
	//map<int, string>::key_type key;
	//map<int, string>::mapped_type type;
	vector<int> nums{2,7,11,15};

	vector<int> res = Solution().twoSum(nums, 9);
	cout << res;

	vector<int> res2 = Solution2().twoSum(nums, 9);
	cout << res;

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
