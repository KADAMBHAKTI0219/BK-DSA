#include<iostream>
using namespace std;
int main(){

	for(int i=1;i<=10;i++){
	 for(int j=1;j<=11;j++){
		 if(((j==1||j==11))||((i==9)&&(j==2||j==10))||(i==8&&(j==3||j==9)) || (i==7&&(j==4||j==8)) || (i==6&&(j==5||j==7)) ||(i==5&&j==6)){
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