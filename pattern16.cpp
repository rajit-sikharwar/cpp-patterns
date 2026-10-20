/*
Alphabet Pattern

A
AB
ABC
ABCD
ABCDE
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter no. of rows here: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++) {
            char ch = 'A' + j; 
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}
