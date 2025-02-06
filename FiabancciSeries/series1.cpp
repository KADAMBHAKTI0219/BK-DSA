#include<iostream>
using namespace std;
int main (){
	int first = 2;
	int n = 2;
	cout << first << " "<< "1" << " ";
	for(int i = 1;i<=10;i++){
		cout << "1/" << n << " ";
		n*=2;
	}
}