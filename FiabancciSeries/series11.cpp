#include<iostream>
using namespace std;
int main (){
	//Look at this series: 1.5, 2.3, 3.1, 3.9, ...
	float start = 1.5;
	
	for(int i=1;i<=10;i++){
		cout << start << "  ";
		start += 0.8;
	}
	return 0;
}