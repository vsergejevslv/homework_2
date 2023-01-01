#include <iostream>
using namespace std;

int sum(int x) {
    int result;
    __asm {
        mov ecx, 1 // counter = 1
        mov eax, 0 // result = 0
        top:
            mov ebx, 1 // number = 1
            add ebx, ecx // (i + 1)
            imul ebx, ebx // ^2
            add eax, ebx // result += result of previous manipulations
            inc ecx // ++counter
            cmp ecx, x // compare counter to x
            jle top // if counter <= x, jump to top
            mov result, eax // store result in result variable
    }
    return result;
}

//int main() {
//    int x;
//
//    cout << "Input value of x: " << endl;
//    cin >> x;
//
//    cout << sum(x) << endl;
//    return 0;
//}