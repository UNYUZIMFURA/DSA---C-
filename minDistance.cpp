#include <iostream>
using namespace std;

int findFactors(int number)
{
    int factors[20] = {};
    int found = 0;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            factors[found] = i;
            found++;
        }
    }

    return factors[1] - factors[0];
}

int main()
{
    cout << findFactors(13013) << endl;
    return 0;
}