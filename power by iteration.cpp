#include<iostream>
using namespace std;

float pow(float base,double power){
	float temp =1;
	int fg=0;
	if (power < 0){
		power = -1*power;
		fg=1;
	}
	for (int i=0 ; i<power ; i++){
		temp *= base;
	}
	if (fg==1){
		temp = 1/ temp;
	}
	return temp;
}
int main(){
	float base;
	float result;
    double power;
    cout << " enter base of multiplication \n" ;
    cin >> base;
    cout << " enter power of the number \n";
    cin >> power;
    cout << "the answer of " << base << " to power " << power << " is : ";
    result = pow(base,power);
    cout << result;
    return 0;
}
