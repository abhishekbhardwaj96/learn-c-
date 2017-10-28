/*
    *
   ***
  *****
 *******
*********
*/

  
#include<iostream>
using namespace std;
int main(){
	int i,j,k;
	int s =1;
	for (i=4; i >= 0 ; i--){
		for (j=0; j <= i ; j++){
			cout << " ";
		}
        for (k=0; k<s ; k++){
    	    cout << "*";
	}
		s = s+ 2;
		cout <<endl;
	}
	return 0;
}
