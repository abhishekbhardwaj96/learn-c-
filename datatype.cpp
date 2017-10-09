#include<iostream>
using namespace std;
int main(){
	int integer1;
	signed int integer2;
	unsigned int integer3;
	short int integer4;
	long int integer5;
	signed short int integer6;
	signed long int integer7;
	
	bool boolean;
	
	char char1;
	signed char char2;
	unsigned char char3;
	
	float float1;
	double floating2;
	long double float3;
	
	
	cout << "size of int" << sizeof(ineger1) ;
	cout << "\n size of signed int" << sizeof(signed int);
	cout << "\n size of unsigned int" << sizeof(unsigned int);
	cout << "\n size of short int" << sizeof(short int);
	cout << "\n size of long int" << sizeof(long int);

	cout << "\n size of boolean" << sizeof(bool);
	
	cout << "\n size of char" << sizeof(char);
	cout << "\n size of signed char" << sizeof(signed char);
	cout << "\n size of unsigned char" << sizeof(unsigned char);
	
	cout << "\n size of float" << sizeof(float);
	
	cout << "\n size of double" << sizeof(double);
	
	
	cout << "size of void" << sizeof(void);
	
    return 0;
    

}
