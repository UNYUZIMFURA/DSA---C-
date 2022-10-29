#include <iostream>
using namespace std;

int sumOdds()
{
    int sum;
    for (int i = 3; i < 20; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    return sum;
}
int main() {
    cout<<"The sum of odd numbers between 1 and 20 is "<<sumOdds()<<endl;
}