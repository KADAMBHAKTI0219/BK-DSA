#include<iostream>
using namespace std;
int main (){
	//Look at this series: 80, 10, 70, 15, 60, ... 
	int first = 80;
	int second=10;
	
	for(int i=1;i<=10;i++){
		cout << first << "  " << second << "  ";
		first-=10;
		second+=5;
		
	}
	return 0;
}