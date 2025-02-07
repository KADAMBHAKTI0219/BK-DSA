#include<iostream>
using namespace std;
int main (){
	//Look at this series: 22, 21, 23, 22, 24, 23, ...
	
	int first = 22;
	int second = 21;
	
	for(int i = 1;i<=10;i++){
	cout << first << " "<< second << " ";
	first++;
	second++;
	
	}
}