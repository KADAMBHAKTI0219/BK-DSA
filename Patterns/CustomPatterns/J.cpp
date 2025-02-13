#include<iostream>
using namespace std;
int main(){
	
	for(int i=1;i<=7;i++){
		for(int j=1;j<=7;j++){
			if( i==1 || (i<=6 && j==4) || (i==7 && (j==3 || j==2)) || ((i==6 || i==5) && j==1)){
				cout << "* ";
			}
			else{
				cout << "  ";
			}
		}
		cout << endl;
	}
	
	return 0;
}