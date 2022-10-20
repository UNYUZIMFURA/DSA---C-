#include <iostream>
using namespace std;

int swappNumbers(int firstNumber, int secondNumber) {
 int tempVariable = firstNumber;
 firstNumber = secondNumber;
 cout<<"After swapping the 1st number is "<<firstNumber<<endl;
 cout<<"After swapping the 2nd number is "<<tempVariable<<endl;
}

int main() {
    int num1;
    int num2;

    cout << "Input 1st number: " << endl;
    cin >> num1;
    cout << "Input 2nd number: " << endl;
    cin >> num2;

    swappNumbers(num1, num2);
    return 0;
}