#include<iostream>
using namespace std;
int main (){
	//Look at this series: 21, 9, 21, 11, 21, 13, 21, ...
	
	int first = 21,second=9;
	
	
	for(int i = 1;i<=10;i++){
	cout << first << " "<< second << " ";
	second+=2;
	
	}
}