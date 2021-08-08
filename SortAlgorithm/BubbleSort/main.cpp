//冒泡排序（Bubble Sort），是一种计算机科学领域的较简单的排序算法。
//它重复地走访过要排序的元素列，依次比较两个相邻的元素，
//如果顺序（如从大到小、首字母从Z到A）错误就把他们交换过来。
//走访元素的工作是重复地进行直到没有相邻元素需要交换，也就是说该元素列已经排序完成。
//这个算法的名字由来是因为越小的元素会经由交换慢慢“浮”到数列的顶端（升序或降序排列），
//就如同碳酸饮料中二氧化碳的气泡最终会上浮到顶端一样，故名“冒泡排序”

#include <iostream>
using namespace std;

#define ArraySize 5

void bubbleSort(int array[], int arraySize)
{
	for (int i = 0; i < arraySize - 1; i++)
	{
		for (int j = 0; j < arraySize - i - 1; j++)
		{
			if (array[j] > array[j + 1])//升序：>, 降序：<
			{
				swap(array[j], array[j + 1]);
			}
		}
	}
}

int main()
{
	int a[ArraySize] = { 4,1,5,3,2 };
	bubbleSort(a, ArraySize);

	for (int i = 0; i < ArraySize; i++)
	{
		cout << a[i] << ", ";
	}
	cout << endl;

	return 0;
}