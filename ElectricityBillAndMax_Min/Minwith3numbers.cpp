#include <iostream>
using namespace std;
int main (){
	int num1,num2,num3;
	cout << "Enter NUM1 , NUM2 and NUM3 : ";
	cin >> num1 >> num2 >> num3;
	
	if(num1<num2){
	 	if(num1<num3){
	 		cout << "NUM1 is Minimum";
		}
		else{
			cout << "NUM3 is Minimum";
		}
	}
	else{
		if(num2<num3){
			cout << "NUM2 is Minimum";
		}
		else{
			cout << "NUM3 is Minimum";
		}
	 	
	 }
	
	
	return 0;
}