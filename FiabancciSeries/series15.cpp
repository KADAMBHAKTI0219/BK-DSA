#include<iostream>
using namespace std;
int main (){
	//Look at this series: 544, 509, 474, 439, ...
	int start = 544;
	
	for(int i=1;i<=10;i++){
		cout << start << "  ";
		start -=35;
	}
	return 0;
}