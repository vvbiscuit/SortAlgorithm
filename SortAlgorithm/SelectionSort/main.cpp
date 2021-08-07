//选择排序（Selection sort）是一种简单直观的排序算法。
//它的工作原理是：第一次从待排序的数据元素中选出最小（或最大）的一个元素，存放在序列的起始位置，
//然后再从剩余的未排序元素中寻找到最小（大）元素，然后放到已排序的序列的末尾。以此类推，
//直到全部待排序的数据元素的个数为零。选择排序是不稳定的排序方法。

#include <iostream>
using namespace std;

//#define ArraySize 5

void selectionSort(int array[],int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < arraySize; j++)
		{
			if (array[j] < array[minIndex])
			{
				minIndex = j;
			}
		}
		if (minIndex != i)
		{
			swap(array[minIndex], array[i]);
		}
	}
}

int main()
{
	//int ArraySize = 5;//这种非常量在程序执行的时候才知道值，不能用于静态数组的大小
	const int ArraySize = 5;
	int a[ArraySize] = { 4,1,5,3,2 };
	selectionSort(a, ArraySize);

	for (int i = 0; i < ArraySize; i++)
	{
		cout << a[i] << ", ";
	}
	cout << endl;

	return 0;
}