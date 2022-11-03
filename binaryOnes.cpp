#include <iostream>
using namespace std;

int countOnes(int n) {
int count = 0;
for (int i = 0; n > 0; i++){
if(n % 2 == 1) {
    count++;
}
n /= 2;
}
return count;
}

int main() {
    cout<<countOnes(15)<<endl;
    return 0;
}