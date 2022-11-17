#include <iostream>
using namespace std;

int isDaphne(int a[], int len)
{
    int countOfType = 0;
    for (int i = 0; i < len; i++)
    {
        if (a[1] % 2 == 0)
        {
            if (a[i] % 2 != 0)
            {
                countOfType += 1;
                cout << "This is not a Daphne array" << endl;
                break;
                return 0;
            }
        }

        else if (a[1] % 2 != 0)
        {
            if (a[i] % 2 == 0)
            {
                countOfType += 1;
                cout << "This is not a Daphne array" << endl;
                break;
                return 0;
            }
        }
    }

    if (countOfType == 0)
    {
        cout << "This is a Daphne array" << endl;
        return 1;
    }
    return 0;
}

int main()
{
    int arr[4] = {4, 3, 8, 6};
    cout << isDaphne(arr, 4) << endl;
    return 0;
}