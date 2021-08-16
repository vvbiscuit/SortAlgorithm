// 希尔排序
// 希尔排序(Shell's Sort)是插入排序的一种又称“缩小增量排序”(Diminishing Increment Sort),
// 是直接插入排序算法的一种更高效的改进版本。
// 希尔排序是非稳定排序算法。该方法因 D.L.Shell 于 1959 年提出而得名。
// 希尔排序是把记录按下标的一定增量分组，对每组使用直接插入排序算法排序;
// 随着增量逐渐减少，每组包含的关键词越来越多，当增量减至 1 时，整个文件恰被分成一组，算法便终止。


#include <iostream>
using namespace std;

#define ArraySize 5

void shellSort(int data[], int arraySize)
{
    for (int gap = arraySize / 2; gap > 0; gap /= 2)
    {
        //从第gap个元素，逐个对其所在组进行直接插入排序操作
        for (int i = gap; i < arraySize; i++)
        {
            int j = i;
            while (j - gap >= 0 && data[j] < data[j - gap])
            {
                //插入排序采用交换法
                swap(data[j], data[j - gap]);
                j -= gap;
            }
        }
    }
}

int main()
{
    int a[ArraySize] = { 4,1,5,3,2 };
    shellSort(a, ArraySize);

    for (int i = 0; i < ArraySize; i++)
    {
        cout << a[i] << ", ";
    }
    cout << endl;

    return 0;
}