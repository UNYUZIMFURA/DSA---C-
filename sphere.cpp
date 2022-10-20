#include <iostream>
using namespace std;
#define PI 3.14

int main() {
   float volume;
   float radius;
   cout<<"Enter the radius of sphere: "<<endl;
   cin>>radius;
   volume = (4 * PI * radius * radius * radius) / 3;
   cout<<"The volume of this sphere is "<<volume<<endl;
   return 0;
}