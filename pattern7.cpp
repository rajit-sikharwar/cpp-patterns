/*

* * * * *
* * * *
* * *
* *
*

*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the no. of rows here: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-(i-1); j++){
            cout << "* ";
        }
        cout << endl;
    }
}

/*
Variant 1: Both start from 0 (The Standard Programmer Way)
    
    for(int i = 0; i < n; i++){
        // Runs n-i times (5, then 4, then 3...)
        for(int j = 0; j < n - i; j++){
            cout << "* ";
        }
        cout << endl;
    }
*/