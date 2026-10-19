/*

1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1

*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the no. of rows here: ";
    cin >> n;

    for(int i=n; i>=1;i--){
        for(int j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}


/*

Alternative logic:

for(int i = 1; i <= n; i++){
    for(int j=1; j<=n-1+1; j++){
        cout << j << " ";
    }
        cout << endl;
}

*/