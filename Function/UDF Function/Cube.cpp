#include<iostream>
using namespace std;
int cube(int num){
	return num*num*num;
}

int main(){
	int n ;
	cout << "Enter a Number : " ;
	cin >> n;
	int cubeAns = cube(n);
	cout << "Cube is : " << cubeAns;
}