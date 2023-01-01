#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int x;
	int result;

	cout << "Enter value of x: \n";
	cin >> x;

	__asm {
		mov eax, x
		cmp eax, 5
		jg g
		je e
		jl l
		g :
		add eax, 15
			mov ebx, 2
			cdq
			idiv ebx
			jmp r
			e :
		mov eax, -18
			jmp r
			l :
		mov ebx, -3
			mul ebx
			add eax, 5
			jmp r
			r :
		mov result, eax
	}
	cout << "Result of function is : \n" << result;

	return result;
}