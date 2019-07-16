#pragma once
#ifndef TESTALGO
#define TESTALGO

#include <iostream>
#include <cassert>
#include <cmath>
#include <algorithm>
using namespace std;

class testAlgotithm {
public:
	//O(logN)
	static int binarySearch(int arr[], int n, int target) {
		int l = 0, r = n - 1;
		while (l <= r) {
			int mid = l + (r - l) / 2;
			if (arr[mid] == target) return mid;
			if (arr[mid] > target)	r = mid - 1;
			else l = mid + 1;
		}
	}
	//O(N)
	static int findMax(int arr[], int n,int &number) {
		assert(n > 0);
		int res = arr[0];
		number = 0;
		for (int i = 1; i < n; i++) {
			if (res < arr[i]) {
				res = arr[i];
				number = i + 1;
			}
		}
		return res;
	}
	//O(NlogN)
	static void mergeSort(int arr[], int n) {
		int *aux = new int[n];
		for (int i = 0; i < n; i++)
			aux[i] = arr[i];
		for (int sz = 1; sz < n; sz = +sz) {
			for (int i = 0; i < n; i += sz + sz)
				_merge(arr, i, i + sz - 1, min(i + sz + sz - 1, n - 1), aux);
		}
		delete[] aux;
		return;
	}
	//O(n^2)
	static void selectionSort(int arr[], int n) {
		for (int i = 0; i < n; i++) {
			int minIndex = i;
			for (int j = i + 1; j < n; j++)
				if(arr[j]<arr[minIndex])
				minIndex = j;
			swap(arr[i], arr[minIndex]);
		}
	}

private:
	static void _merge(int arr[], int l, int mid, int r, int aux[]) {
		int i = l, j = mid + 1;
		for (int k = l; k <= r; k++) {
			if (i > mid) {
				arr[k] = aux[j]; j++;
			}
			else if (j > r) {
				arr[k] = aux[i]; i++;
			}
			else {
				arr[k] = aux[j]; j++;
			}
		}
	}
};

#endif // !TESTALGO


