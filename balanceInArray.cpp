#include <iostream>
using namespace std;

int isBalanced(int a[], int len)
{
    int count = 0;
    int found = 0;
    int foundMatch[len] = {};

    for (int i = 0; i < len; i++)
    {
        for (int j = 1; j < len; j++)
        {
            if (-a[i] == a[j])
            {
                foundMatch[found] = a[i];
                foundMatch[found + 1] = a[j];
                found += 1;
            }
        }
    }

    for (int k = 0; k < len; k++)
    {
        if (foundMatch[k] != 0)
        {
            count += 1;
        }
    }

    if (count == len)
    {
      cout<<"The array is balanced"<<endl;
      return 1;
    }
    
    cout<<"The array is unbalanced"<<endl;
    return 0;
}

int main()
{
    int arr[] = {-2, 2, 3, -3};
    cout<<isBalanced(arr, 4)<<endl;
    return 0;
}

/*
Author: UNYUZIMFURA Kevin
*/