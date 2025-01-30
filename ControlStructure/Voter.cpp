#include<iostream>
using namespace std;
int main(){
//	the eligibility for vote

int age;
cout << "Enter Your Age : ";
cin >> age;
if(age<=0){
	cout << "Enter A Valid Age" ;
}
else if(age >=18 && age<=100){
	cout << "Your age is eligible for vote";
}
else if(age <= 18 || age>100){
	cout << "Your age is not eligible for vote";
}

	
	return 0;
}