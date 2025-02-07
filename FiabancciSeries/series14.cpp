#include<iostream>
using namespace std;
int main (){
	//Look at this series: 201, 202, 204, 207, ...
	int start = 201;
	
	for(int i=1;i<=10;i++){
		cout << start << "  ";
		start += i;
	}
	return 0;
}