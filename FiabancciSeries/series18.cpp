#include<iostream>
using namespace std;
int main (){
	//Look at this series: 5.2, 4.8, 4.4, 4, ...
	float start = 5.2;
	
	for(int i=1;i<=10;i++){
		cout << start << "  " ;
		start-=0.4;
	}
	return 0;
}