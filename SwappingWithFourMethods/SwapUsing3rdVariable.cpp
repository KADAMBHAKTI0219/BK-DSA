#include <iostream>
using namespace std;
int main (){
	int num1,num2,temp;
	cout << "Enter num1 : ";
	cin >> num1;
	cout << "Enter num2 : ";
	cin >> num2;
	
	temp = num1;
	num1 = num2;
	num2 = temp;
	
	cout << "Num1 = " << num1 << endl;
	cout << "Num2 = " << num2;
	
	
	return 0;
}