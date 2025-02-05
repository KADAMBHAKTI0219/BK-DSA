#include <iostream>
using namespace std;
int main(){
//	the eligibility for vote

int age;
cout << "Enter Your Age : ";
cin >> age;
if(age<=0){
	cout << "Don't enter negative number and 0" ;
}
else if(age >=18 && age<=100){
	cout << "Your age is eligible for vote";
}
else if(age <= 18 || age>100){
	cout << "Your age is not eligible for vote";
}

	
	return 0;
}