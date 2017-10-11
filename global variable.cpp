/*extern :- Just for understanding extern is used to declare a global variable or function in another file. The extern modifier is 
most commonly used when there are two or more files sharing the same global variables or functions 

byte :-byte is a distinct type that implements the concept of byte as specified in the C++ language definition.
Like char and unsigned char, it can be used to access raw memory occupied by other objects (object representation), but unlike those
 types, it is not a character type and is not an arithmetic type. A byte is only a collection of bits, and only bitwise logic operators are defined for it.*/

#include<iostream>
#include<conio.h>
using namespace std;
int g=40;
int main(){
	int g;
	g=20;
	cout << g;
}


