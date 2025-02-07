#include<iostream>
using namespace std;
int main (){
	//Look at this series: 14, 28, 20, 40, 32, 64, ...
	int start = 14;
	for(int i=1;i<=10;i++){
		cout << start << "  ";
		if(i%2==0){
			start -=8;
		}
		else{
			start*=2;
		}
	}
	return 0;
}
