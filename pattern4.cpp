/*
1   2  3  4
5   6  7  8
9  10 11 12
13 14 15 16

*/
#include <iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter n here: ";
    cin >> n;

    int num=1;                    //comment out num & existing logic for alternative solution !

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << num << " ";  //cout << (i - 1) * n + j << " ";
            num++;
        }
        cout << endl;
    }
}
