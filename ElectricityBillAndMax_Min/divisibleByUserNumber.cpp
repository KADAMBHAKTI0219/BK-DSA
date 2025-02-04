#include <iostream>
using namespace std;
int main(){
	int num,divisibleByNo;
	cout << "Enter your Number : ";
	cin >> num;
	cout << "Enter a number you want to divisible by the entered number : ";
	cin >> divisibleByNo;
	
	if(num%divisibleByNo==0){
		cout << num << " is Divisible By : " << divisibleByNo ;
	}
	else{
		cout << num << " is not Divisible By : " << divisibleByNo;
	}
	
	return 0;
}