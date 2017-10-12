#include<iostream>
#include<conio.h>
using namespace std;
int f();
static int count=10;
int main(){
	while(count--){
		f();
	}
	return 0;
}


int f(){
    static	int i =5;
	cout <<"\nvalue of i" << i <<"value of count" <<count;
	i++;
	return 0;
}
