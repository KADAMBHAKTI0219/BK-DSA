#include<iostream>
using namespace std;
int main (){
	//Look at this series: 53, 53, 40, 40, 27, 27, ...
	
	int num = 53;
	
	for(int i = 1;i<=10;i++){
	cout << num << " "<< num << " ";
	num-=13;
	
	}
}