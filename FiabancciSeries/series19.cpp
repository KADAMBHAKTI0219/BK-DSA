#include<iostream>
using namespace std;
int main (){
	//Look at this series: 8, 6, 9, 23, 87 , ...
	int start =8;

	for(int i=1;i<=10;i++){
		cout << start << "  ";
		start = start * i - (i+1);
	}
	return 0;
}