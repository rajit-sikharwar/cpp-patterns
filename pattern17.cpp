/*

A B C D E 
A B C D 
A B C 
A B 
A

*/
#include <iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter no. of rows here: ";
    cin >> n;

    for(int i = n; i >= 1; i--){
        for(int j = 0; j < i; j++){
            char ch = 'A' + j;
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
Striver's Solution
for(int i=0; i<n; i++){
    for(char ch='A'; ch <= 'A' + (n-i-1); ch++){
        cout << ch << " ";
    }
    cout << endl;    
}
*/