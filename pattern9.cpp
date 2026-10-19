/*
n=5
Pyramid
- - - - * - - - -
- - - * * * - - -
- - * * * * * - -
- * * * * * * * -
* * * * * * * * *

*/

#include <iostream>;
using namespace std;

int main(){
    int n; cout << "Enter the no. of rows here: "; cin >> n;

    int stars =1;
    for(int i=1; i<=n; i++){

        // for spaces
        for(int j=1; j<=n-i;j++){
            cout << " ";
        }

        //for stars
        for(int j=1; j<=stars; j++){
            cout << "*";
        }

        //for spaces
        for(int j=1; j<=n-i;j++){
            cout << " ";
        }
        cout << endl;
        stars +=2;
    }

}