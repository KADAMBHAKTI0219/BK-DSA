#include<iostream>
using namespace std;
int main (){
	
	for(int i=1;i<=5;i++){
		for(int j=1;j<=i;j++){
			int n = i-j+1;
			if(n%2==0){
				cout << "| ";
			}
			else{
				cout << "- ";
			}
		}
		cout << endl ;
	}
	
	return 0;
}