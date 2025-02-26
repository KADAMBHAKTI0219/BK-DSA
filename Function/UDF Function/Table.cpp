#include<iostream>
using namespace std;
void table(int num){
	for(int i = 1;i<=10;i++){
		cout << num << " * " << i << " = " << num*i << endl;
	} 
	cout << endl;
}

int main(){
	table(5);
	table(7);
}