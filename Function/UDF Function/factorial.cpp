#include<iostream>
using namespace std;
int factorial(int n){
	int fact=1;
	for(int i=1;i<=n;i++){
		fact*=i;	
	}	
	return fact;
}

int main(){
	int num;
    cout << "Enter a number: ";
    cin >> num;
	int factorialNum = factorial(num);
	cout << "Factorial Number is : " << factorialNum;
	return 0;
}