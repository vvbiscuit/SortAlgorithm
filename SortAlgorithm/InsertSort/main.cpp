//插入排序
//算法原理
//将数据分为两部分，有序部分与无序部分，一开始有序部分包含第1个元素，
//依次将无序的元素插入到有序部分，直到所有元素有序。
//插入排序又分为直接插入排序、二分插入排序、链表插入等，这里只讨论直接插入排序。它是稳定的排序算法，时间复杂度为O(n ^ 2)

#include <iostream>
using namespace std;

#define ArraySize 5

void insertSort(int data[], int arraySize)
{
	for (int i = 1; i < arraySize; i++)
	{
		for (int j = i; j > 0 && data[j] < data[j - 1]; j--)
		{
			int tmp = data[j];
			data[j] = data[j - 1];
			data[j - 1] = tmp;
		}
	}
}

int main()
{
	int a[ArraySize] = { 4,1,5,3,2 };
	insertSort(a, ArraySize);

	for (int i = 0; i < ArraySize; i++)
	{
		cout << a[i] << ", ";
	}
	cout << endl;

	return 0;
}