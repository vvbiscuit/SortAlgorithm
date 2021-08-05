//ѡ������Selection sort����һ�ּ�ֱ�۵������㷨��
//���Ĺ���ԭ���ǣ���һ�δӴ����������Ԫ����ѡ����С������󣩵�һ��Ԫ�أ���������е���ʼλ�ã�
//Ȼ���ٴ�ʣ���δ����Ԫ����Ѱ�ҵ���С����Ԫ�أ�Ȼ��ŵ�����������е�ĩβ���Դ����ƣ�
//ֱ��ȫ�������������Ԫ�صĸ���Ϊ�㡣ѡ�������ǲ��ȶ������򷽷���

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
	//int ArraySize = 5;//���ַǳ����ڳ���ִ�е�ʱ���֪��ֵ���������ھ�̬����Ĵ�С
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