#include<iostream>
using namespace std;
int main(){
	int i,j=15,k=20;
	//for loop
	for (i=10; i<20; i++){
		cout << "the vlue of i in for loop" << i << "\n";
    }
    //while loop
    while(j<25){
    	cout << "the value of j in while loop" << j << "\n";
    	j++;
	}
 
    //do while loop
    do{
    	cout << "the value of k in do while"  << k << "\n";
    	k++;
	}while(k<30);
	return 0;
}
