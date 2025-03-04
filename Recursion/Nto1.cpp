#include <iostream>
using namespace std;

void recursion(int n, int i = 1) {
    if (n==0) return;  

    cout << n << " "; 
    recursion(n - 1);  
}

int main() {
    recursion(23);  
    return 0;
}
