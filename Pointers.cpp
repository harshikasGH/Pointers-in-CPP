// Aditya Jadhav
// 24070123005

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *aptr = &a;
    cout << a << endl;
    cout << aptr << endl;
    cout << *aptr << endl;
    cout << &a << endl;

    return 0;
}

// OUTPUT
// 10
// 0x261fe78
// 10
// 0x261fe78