#include <iostream>
using namespace std;

int checkMax(int *array)
{
    int max = array[0];
    for (int i = 0; i < 10; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

int checkMin(int *array)
{
    int min = array[0];
    for (int i = 0; i < 10; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
}

int main()
{
    int arr[10] = {14, 3, 6, 7, 41, 56, 15, 11, 25, 9};
    cout << checkMin(arr) << endl;
    cout << checkMax(arr) << endl;
    return 0;
}