#include <iostream>
#include <string.h>

using namespace std;
void prompt() {
    int choice;
    int num1, num2;
    int answer;

    cout << "========= MENU ========= \n"<<endl;
    cout << " 1. Add\n 2. Subtract\n 3. Multiply\n 4. Divide\n 5. Modulus\n"<<endl;
    cout << "Enter your choice: "<<endl;
    cin >> choice;
    cout <<"Enter your two numbers: "<<endl;
    cin >> num1 >> num2;

    switch(choice) {
        case 1 : 
        answer = num1 + num2;
        break;

        case 2 :
        answer = num1 - num2;
        break;

        case 3 :
        answer = num1 * num2;
        break;

        case 4 :
        answer = num1 / num2;
        break;

        case 5 :
        answer = num1 % num2;
        break;

        default: 
        cout << "Enter the correct operation";
        break;
    }

    cout << "Result: "<< answer << endl;
}

int main() {
    prompt();
    char continueSelected;
    cout << "Continue (y/n)? "<<endl;
    cin >> continueSelected; 

    /*
    Continously asking the user if he/she wants to continue,
    If yes Prompt again else Terminate the program!
    */
   
    while (continueSelected == 'y') prompt();
    return 0;
}