#include <iostream>
using namespace std;

int sumEvenNumbers() {
    int sum;
    for (int i = 0; i < 100; i++) {
        if (i % 2 == 0) {
         sum += i;
        }
    }
    return sum;
}

int main() {
    cout<<"The sum of all even numbers less than 100 is "<<sumEvenNumbers()<<endl;
}