#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	enum colour {blue,green,yellow};
	cout << "code of blue " << blue;
	cout << "\n code of green " <<  green;
	cout << "\n code of yellow \n" <<  yellow;

    enum color {black,red,white=9};
    cout << "code of black " << black;
	cout << "\n code of red " <<  red;
	cout << "\n code of white \n" <<  white;

    enum colors {brown,silver=9,gold};
    cout << "code of brown " << brown;
	cout << "\n code of silver " <<  silver;
	cout << "\n code of gold\n" <<  gold;
	
    enum colorss {ab ='z',bc,cd};
    cout << "code of ab " << ab;
	cout << "\n code of bc " <<  bc;
	cout << "\n code of cd \n" <<  cd;
	return 0;
}
