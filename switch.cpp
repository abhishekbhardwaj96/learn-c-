#include<iostream>
using namespace std;
int main(){
	int a;
	cout << "enter no between 1 to 3 to be print";
	cin >> a;
	switch(a){
		case 1: cout << "no is equal to" << a;
		        break;
		case 2: cout << "no is equal to" << a;
		        break;
	    case 3: cout << "no is equal to" << a;
		        break;
	    default: cout << "you enter wrong no";        
	}
	
	return 0;
}

