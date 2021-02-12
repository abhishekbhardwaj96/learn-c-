#include<iostream>
using namespace std;
int main(){
	int i,j=15,k=20;
	
    //for loop : entry controlled loop 
	
	for (i=10; i<20; i++){
		cout << "the value of i in for loop" << i << "\n";
    	}
	
    //while loop : entry controlled loop 
    	while(j<25){
    		cout << "the value of j in while loop" << j << "\n";
    		j++;
	}
 
    //do while loop : exit controlled loop , executes once even if test condition fails
    	do{
    		cout << "the value of k in do while"  << k << "\n";
    		k++;
	}while(k<30);
	return 0;
}
