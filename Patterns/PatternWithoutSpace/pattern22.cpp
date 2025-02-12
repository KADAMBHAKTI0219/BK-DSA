#include<iostream>
using namespace std;
int main(){
	char alpha = 'A';
	for(char i='E';i>='A';i--){
		for(char j='E';j>=i;j--){
	
			cout << alpha << " ";
			alpha ++;
		}
		cout << endl;
	}
	
	return 0;
}