#include<iostream>
using namespace std;
int main (){
	//Look at this series: 31, 29, 24, 22, 17, ...  
	int first = 31;
	int second = 29;
	
	for(int i = 1;i<=10;i++){
		
	cout << first << " "<< second << " ";
	first-=7;
	second-=7;
	
	}	
}