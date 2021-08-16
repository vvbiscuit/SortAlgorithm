//堆排序（英语：Heapsort）是指利用堆这种数据结构所设计的一种排序算法
//堆是一个近似完全二叉树的结构，并同时满足堆积的性质：即子结点的键值或索引总是小于（或者大于）它的父节点

#include <iostream>
using namespace std;

#define ArraySize 5

void max_heapify(int arr[], int start, int end)
{
    //建立父节点指标和子节点指标
    int dad = start;
    int son = dad * 2 + 1;
    while (son <= end)  //若子节点指标在范围内才做比较
    {
        if (son + 1 <= end && arr[son] < arr[son + 1]) //先比较两个子节点大小，选择最大的
        {
            son++;
        }
        if (arr[dad] > arr[son]) //如果父节点大於子节点代表调整完毕，直接跳出函数
        {
            return;
        }
        else  //否则交换父子内容再继续子节点和孙节点比较
        {
            swap(arr[dad], arr[son]);
            dad = son;
            son = dad * 2 + 1;
        }
    }
}

void heap_sort(int arr[], int len)
{
    //初始化，i从最後一个父节点开始调整
    for (int i = len / 2 - 1; i >= 0; i--)
    {
        max_heapify(arr, i, len - 1);
    }
    //先将第一个元素和已经排好的元素前一位做交换，再重新调整(刚调整的元素之前的元素)，直到排序完毕
    for (int i = len - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);
        max_heapify(arr, 0, i - 1);
    }
}

int main()
{
    int a[ArraySize] = { 4,1,5,3,2 };
    heap_sort(a, ArraySize);

    for (int i = 0; i < ArraySize; i++)
    {
        cout << a[i] << ", ";
    }
    cout << endl;

    return 0;
}
