#include <iostream>
using namespace std;

void recursion(int n, int i = 1) {
    if (i > n) return;  

    cout << i << " "; 
    recursion(n, i + 1);  
}

int main() {
    recursion(23);  
    return 0;
}
