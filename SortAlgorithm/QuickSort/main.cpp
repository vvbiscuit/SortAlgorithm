//快速排序
//方法:快速排序主要采用“二分”的思想, 步骤如下 :
//  1) 设置两个变量i、j，排序开始的时候：i = 0，j = n - 1；
//  2）第一个数组值作为比较值，首先保存到temp中，即temp = A[0]；
//  3）然后j--, 向前搜索, 找到小于temp后, 因为s[i]的值保存在temp中, 所以直接赋值, s[i] = s[j]
//  4）然后i++, 向后搜索, 找到大于temp后, 因为s[j]的值保存在第2步的s[i]中, 所以直接赋值, s[j] = s[i], 然后j--, 避免死循环
//  5）重复第3、4步，直到i = j, 最后将temp值返回s[i]中
//  6) 然后采用“二分”的思想, 以i为分界线, 拆分成两个数组 s[0, i - 1]、s[i + 1, n - 1]又开始排序

#include <iostream>
using namespace std;

#define ArraySize 5

/**********************************************************************************************//**
 * @fn  int getIndex(int arr[], int low, int high)
 *
 * @brief   获取基准值，快速排序核心算法
 *
 * @author  vvbiscuit
 * @date    2021/8/16
 *
 * @param   arr     The array.
 * @param   low     The low.
 * @param   high    The high.
 *
 * @returns The index.
 **************************************************************************************************/
int getIndex(int arr[], int low, int high)
{
    // 基准数据
    int tmp = arr[low];
    while (low < high)
    {
        // 当队尾的元素大于等于基准数据时,向前挪动high指针
        while (low < high && arr[high] >= tmp)
        {
            high--;
        }
        // 如果队尾元素小于tmp了,需要将其赋值给low
        arr[low] = arr[high];
        // 当队首元素小于等于tmp时,向前挪动low指针
        while (low < high && arr[low] <= tmp)
        {
            low++;
        }
        // 当队首元素大于tmp时,需要将其赋值给high
        arr[high] = arr[low];

    }
    // 跳出循环时low和high相等,此时的low或high就是tmp的正确索引位置
    // 由原理部分可以很清楚的知道low位置的值并不是tmp,所以需要将tmp赋值给arr[low]
    arr[low] = tmp;
    return low; // 返回tmp的正确位置
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        // 找寻基准数据的正确索引
        int index = getIndex(arr, low, high);

        // 进行迭代对index之前和之后的数组进行相同的操作使整个数组变成有序
        //quickSort(arr, 0, index - 1); 之前的版本，这种姿势有很大的性能问题，谢谢大家的建议
        quickSort(arr, low, index - 1);
        quickSort(arr, index + 1, high);
    }
}

int main()
{
    int a[ArraySize] = { 4,1,5,3,2 };
    quickSort(a, 0, ArraySize - 1);

    for (int i = 0; i < ArraySize; i++)
    {
        cout << a[i] << ", ";
    }
    cout << endl;

    return 0;
}