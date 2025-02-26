#include<iostream>
using namespace std;
int square(int num){
	return num*num;
}

int main(){
	int n ;
	cout << "Enter a Number : " ;
	cin >> n;
	int squareAns = square(n);
	cout << "Square is : " << squareAns;
}