#include<iostream>
using namespace std;
int main (){
	//Look at this series: 58, 52, 46, 40, 34, ...	
	int first = 58;
	int second = 52;
	
	for(int i = 1;i<=10;i++){
		
	cout << first << " "<< second << " ";
	first-=12;
	second-=12;
	
	}	
}