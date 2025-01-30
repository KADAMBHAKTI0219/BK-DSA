#include<iostream>
using namespace std;
int main(){
//	WAP TO PRINT GRADES OF STUDENT BASED ON THEIR PERCENTAGE.
 float percentage;
 cout << "Enter Your Percentage : ";
 cin >> percentage;
 
 if(percentage >= 100 || percentage < 0){
 	cout << "Enter A Valid Percentage : " << percentage;
 }
 else if(percentage <=100 && percentage >=85){
 	cout << "Your Grade is A and percentage is : " << percentage; 
 }
 else if(percentage < 85 && percentage >= 60){
 	cout << "Your Grade is B and percentage is : " << percentage;
 } 
 else if(percentage < 60 && percentage >= 45){
 	cout << "Your Grade is C and percentage is : " << percentage;
 }
 else if(percentage < 45 && percentage >= 33){
 	cout << "Your Grade is D and percentage is : " << percentage;
 }
 else{
 	cout << "You are fail! Better Luck For Next Time : " << percentage;
 }
 
	return 0;
}