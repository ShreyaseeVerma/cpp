/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int n=4;
    for (int i=1;i<=n;i++){
        //top left triangle
        for (int j=0;j<i;j++){
            cout << "*";
        }
        //spaces
        for (int j=0;j<2*(n-i);j++){
            cout << " ";
            
        }
        for (int j=0;j<i;j++){
            cout << "*";
        }
        cout << endl ;
    }
         
        for(int i=n; i>0;i--)
    {
        for(int  j=1;j<=i;j++){
            cout << "*";
        }
        //spaces
        for (int j=0;j<2*(n-i);j++){
            cout << " ";
            
        }
          for(int  j=1;j<=i;j++){
            cout << "*";
           }
     cout <<endl;
    }
    
         return 0;
}