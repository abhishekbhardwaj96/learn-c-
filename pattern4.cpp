/*
*********
 *******
  *****
   ***
    *

*/

  
#include<iostream>
using namespace std;
int main(){
	int i,j,k;
	int s =1;
	for (i=5; i > 0 ; i--){
		for (j=i; j <5  ; j++){
			cout << " ";
		}
        for (k=0; k<2*i-1 ; k++){
    	    cout << "*";
	}
		s = s+ 2;
		cout <<endl;
	}
	return 0;
}
