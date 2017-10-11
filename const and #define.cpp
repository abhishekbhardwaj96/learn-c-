/*Constants refer to fixed values that the program may not alter and they are called literals.*/

#include<iostream>
#include<conio.h>
using namespace std;
#define LENGTH 10
#define BREADTH 20
const int L = 20;
const int B =  20;

int main(){
	int area,area2;
	area = LENGTH * BREADTH;
	cout << "area is = " << area;
	area2 = L*B;
	cout << "\n second area is = "<<area2;
	return 0;
}

