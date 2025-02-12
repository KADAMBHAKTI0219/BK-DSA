#include<iostream>
using namespace std;
int main(){
	
	for(char i='E';i>='A';i--){
		for(char j='A';j<=i;j++){
			cout << j << " ";
		}
		cout << endl;
			for(char k='E'-i;k>=0;k--){
			cout << "  ";
		}
	}
	
	return 0;
}