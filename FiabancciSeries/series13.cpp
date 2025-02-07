#include<iostream>
using namespace std;
int main (){
	//Look at this series: 2, 4, 6, 8, 10, ... 
	int start = 2;
	
	for(int i=1;i<=10;i++){
		cout << start << "  ";
		start += 2;
	}
	return 0;
}