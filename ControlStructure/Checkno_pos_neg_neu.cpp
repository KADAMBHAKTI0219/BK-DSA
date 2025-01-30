#include<iostream>
using namespace std;
int main(){
	int num;
	cout << "Enter Your Number";
	cin >> num;
	if(num == 0){
		cout << "Entered number is Neutral number = " << num;
	}
	else if(num > 0){
		cout << "Entered number is Postive number = " << num;
	}
	else if(num < 0){
		cout << "Entered number is Negative number = " << num;
	}
	
	return 0;
}