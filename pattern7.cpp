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

Variant 2: i starts from n, j starts from 1 (The Countdown Way)
for(int i = n; i >= 1; i--) {
    // When i is 5, this runs 1 to 5. When i is 4, 1 to 4.
    for(int j = 1; j <= i; j++) {
        cout << "* ";
    }
    cout << endl;
}

Variant 3: i starts from 1, j starts from n (Inner Countdown)
for(int i = 1; i <= n; i++) {
    // j starts at n (5) and counts down until it hits i
    for(int j = n; j >= i; j--) {
        cout << "* ";
    }
    cout << endl;
}

Variant 4: Both start high and count down (Double Countdown)
for(int i = n; i >= 1; i--) {
    // Starts at i and counts down to 1
    for(int j = i; j >= 1; j--) {
        cout << "* ";
    }
    cout << endl;
}

*/