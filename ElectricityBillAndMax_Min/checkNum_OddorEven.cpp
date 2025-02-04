#include <iostream>
using namespace std;
int main(){
	int num;
	cout << "Enter a Number to check number is odd or even : ";
	cin >> num;
	if(num%2==0){
		cout << num << " is Even Number";
	} 
	else{
		cout << num << " is Odd Number";
	}
	
	return 0;
}