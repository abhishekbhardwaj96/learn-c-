#include<iostream>
#include<string.h>
using namespace std;
void rev(char* str,int len){
	int j= 0;
	char revStr[20];
	for (int i=len-1; i >=0 ; i--){
		revStr[j] = str[i];
		j++;
	}
	revStr[j] = '\0';
	cout << "\n reverse string is " << revStr;;
}
int main(){
	int length = 0;
	char str[20];
	cout << "enter the string to be revered  ";
	gets(str);
	length = strlen(str);
	rev(str,length);
	return 0; 
}
