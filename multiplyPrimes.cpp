#include <iostream>
using namespace std;

int main()
{
    int product = 1;
    int found = 0;
    int primeNumber[25] = {};

    for (int i = 2; i <= 97; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count += 1;
            }
        }
        if (count == 2)
        {
            primeNumber[found] = i;
            found++;
        }
    }

    for (int k; k < 25; k++)
    {
        product *= primeNumber[k];
    }

    cout << "The product of prime numbers between 1 and 100 is " << product << endl;
    return 0;
}