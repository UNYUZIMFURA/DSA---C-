#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c, discriminant, x1, x2;
    cout<<"Enter coefficient a: "<<endl;
    cin>>a;
    cout<<"Enter coefficient b: "<<endl;
    cin>>b;
    cout<<"Enter coefficient c: "<<endl;
    cin>>c;


    discriminant = sqrt((b * b) - (4 * a * c));
    
    x1 = (-b + discriminant) / (2 * a);
    x2 = (-b - discriminant) / (2 * a);

    cout<<"x1 is "<<x1<<endl;
    cout<<"x2 is "<<x2<<endl;
 
    return 0;
}