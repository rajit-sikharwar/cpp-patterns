/* Alphabet Pyramid (or Palindrome Alphabet Triangle)
        A 
      A B A 
    A B C B A 
  A B C D C B A 
A B C D E D C B A 

*/

#include <iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter n: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        
        for(int j = 1; j <= n - i; j++){
            cout << "  ";
        }
        for(int j = 0; j < i; j++){
            char ch = 'A' + j;
            cout << ch << " ";
        }
        for(int j = i - 2; j >= 0; j--){
            char ch = 'A' + j;
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}