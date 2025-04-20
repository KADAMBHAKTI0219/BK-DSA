#include<iostream>
using namespace std;
int main(){
	
	int sizeOfArr;
	cout << "Enter Size Of Array : ";
	cin >> sizeOfArr;
	
	int arr[sizeOfArr];
	for(int i=0;i<sizeOfArr;i++){
		cout << "Enter Value of arr[" << i << "]: ";
		cin >> arr[i];
	}
	cout << endl;
	for(int i=0;i<sizeOfArr;i++){
		for(int j=0;j<sizeOfArr;j++){
			if(arr[i] < arr[j]){
				arr[i] = arr[i] +arr[j];
				arr[j] = arr[i] - arr[j];
				arr[i] = arr[i] - arr[j];
 			}
		}
	}
	cout << "Ascending Order is : ";
	for(int i=0;i<sizeOfArr;i++){
		cout << arr[i] << " ";
	}
	return 0;
}