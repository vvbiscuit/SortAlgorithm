//��������
//�㷨ԭ��
//�����ݷ�Ϊ�����֣����򲿷������򲿷֣�һ��ʼ���򲿷ְ�����1��Ԫ�أ�
//���ν������Ԫ�ز��뵽���򲿷֣�ֱ������Ԫ������
//���������ַ�Ϊֱ�Ӳ������򡢶��ֲ��������������ȣ�����ֻ����ֱ�Ӳ������������ȶ��������㷨��ʱ�临�Ӷ�ΪO(n ^ 2)

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