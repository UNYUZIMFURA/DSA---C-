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
                cout<<"Push"<<a[i]<<a[j]<<endl;
            }
        }
    }
    for (int k = 0; k < len; k++)
    {
        cout<<foundMatch[k]<<endl;
        if (foundMatch[k] != 0)
        {
            count += 1;
        }
    }

    if (count == len)
    {
      cout<<"Balanced"<<endl;
    }
    else {
        cout<<"Unbalanced"<<endl;
    }
    return 0;
}

int main()
{
    int arr[] = {-2, 2, 3, -3};
    isBalanced(arr, 4);
    return 0;
}