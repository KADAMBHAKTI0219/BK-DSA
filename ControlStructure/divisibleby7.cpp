#include<iostream>
using namespace std;
int main(){
	int num;
	cout << "Enter Your Number";
	cin >> num;
	if(num < 0){
		cout << "Enter a Positive Number";
	}
	else if(num%7==0){
		cout << "Number is divisible by 7";
	}
	else{
		cout << "Number is not divisible by 7"
	}
	return 0;
}