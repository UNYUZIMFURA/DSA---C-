#include <iostream>
using namespace std;

int main() {
    float length, width, area, perimeter;
    cout<<"Enter length of Rectangle: "<<endl;
    cin>>length;
    cout<<"Enter width of Rectangle: "<<endl;
    cin>>width;

    perimeter = 2 * (length + width);
    area = length * width;

    cout<<"The area is " << area << endl;
    cout<<"The perimeter is "<< perimeter << endl;

    return 0;
}