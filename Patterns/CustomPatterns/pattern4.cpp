#include<iostream>
using namespace std;
int main(){
	//1        1
	//12      21
	//123    321
	//1234  4321
	//1234554321
	
	for(int i=1;i<=5;i++){
		for(int j=1;j<=i;j++){
			cout << j << " ";
		}
		for(int l=5;l>i;l--){
			cout << "    ";
		}

		for(int k=i;k>=1;k--){
			cout << k << " ";
		}
		
		
		cout << endl;
	}
	
	return 0;
}