#include <iostream>
using namespace std;
int main(){
	int num1,num2,num3,num4;
	cout << "Enter a num1 , num2 , num3 , num4 : ";
	cin >> num1 >> num2 >> num3 >> num4;
	if(num1>num2){
		if(num1 > num3){
			if(num1 > num4){
				cout << "Num1 is Maximum";
			}
			else{
				cout << "Num4 is Maximum";
			}
		}
		else{
			cout << "Num3 is Maximum";
		}
	}
	else {
		if(num2 > num3){
			if(num2 > num4){
				cout << "Num2 is Maximum";
			}
			else{
				cout << "Num4 is Maximum";
			}
		}
		else{
			if(num3 > num4){
				cout << "Num3 is Maximum";
			}
			else{
				cout << "Num4 is Maximum";
			}
		}
	}
}