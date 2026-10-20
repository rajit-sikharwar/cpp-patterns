/*

1      1 
12    21 
123  321 
12344321

*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter no. of rows here: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= i; j++){
            cout << j;
        }
        for(int j = 1; j <= 2*(n - i); j++){
            cout << " ";
        }
        for(int j = i; j >= 1; j--){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}

/*
for better visual add spaces

Outer loop for rows
    for(int i = 1; i <= n; i++){

1st Inner Loop: Print left numbers (1 to i)
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }

2nd Inner Loop: Print spaces in the middle (2 * (n - i))
        for(int j = 1; j <= 2 * (n - i); j++) {
            cout << "  "; // Double space to match "j " spacing
        }

3rd Inner Loop: Print right numbers (i down to 1)
        for(int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
*/


/* Striver's Solution

int space = 2*(n-1);
for(int i=1; i <= n; i++){

// numbers
for(int j=1; j <= i; j++) {
cout << j;
}

// space
for(int j = 1;j <= space; j++){
cout << " ";
}

// numbers
for(int j = i; j>=1; j -- ){
cout << j;
}
cout << endl;
space -= 2;
*/