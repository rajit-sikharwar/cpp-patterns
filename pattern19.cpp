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
    cout << "Enter no. of rows here: ";
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


/*
    int chars = 1;
    for(int i = 1; i <= n; i++){

        // 1st Loop: for spaces before
        for(int j = 1; j <= n - i; j++){
            cout << " ";
        }

        // 2nd Loop: for characters
        char ch = 'A';
        for(int j = 1; j <= chars; j++){
            cout << ch;
            
            // The Magic Logic: Should the next letter go up or down?
            if(j < i)
            {
                ch++; // Move forward in the alphabet (A -> B)
            }
            else
            {
                ch--; // Move backward in the alphabet (B -> A)
            }
        }

        // 3rd Loop: for spaces after
        for(int j = 1; j <= n - i; j++){
            cout << " ";
        }
        
        cout << endl;
        chars += 2; // Increase character count by 2 for the next row
    }
    return 0;
}

*/