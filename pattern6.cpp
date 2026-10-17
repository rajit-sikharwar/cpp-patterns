/*

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter no. of rows(n) here: ";
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

// Approach 2: logic Using 0-based loops
/*
for(int i=0; i <=n; i++){
    for(int j=0; j<i+1; j++){
        cout << (j+1) << " ";
    }
    cout << endl;
}
*/