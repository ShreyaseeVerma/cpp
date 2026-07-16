/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter a number to print the characters:" << endl;
    cin >> m;
    char ch='A';
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m;j++){
          cout << ch; 
           ch++;
            
            
            }
            cout << endl;
    }
    

    return 0;
}