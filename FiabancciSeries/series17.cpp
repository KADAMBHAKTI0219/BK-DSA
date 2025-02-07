#include<iostream>
using namespace std;
int main (){
	//Look at this series: 2, 6, 18, 54, ...
	int start = 2;
	
	for(int i=1;i<=10;i++){
		cout << start << "  " ;
		start*=3;
	}
	return 0;
}