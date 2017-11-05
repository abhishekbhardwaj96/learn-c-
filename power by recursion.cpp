#include<iostream>
using namespace std;

double pow(double base,double power){
	int fg =0;
	double temp =base;
	if (power < 0){
		power = -power;
		fg=1;
	}
	if (power == 1) {
		return base;
	}
	else {
		return temp * pow(base,power-1);
	}
	
}
int main(){
	double base;
	double power;
	double result;
	cout << "enter the base \n";
	cin >> base;
	cout << "enter the power of the base\n";
	cin >> power;
	result = pow(base,power);
	if (power < 0){
		result = 1/result;
	}
	cout << " the answer of" << base << " to the power " << power << " is : " << result;
	return 0;
	
}
