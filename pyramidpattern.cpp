/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number:";
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-i-1;j++){
            cout << " ";
        }
        for(int j=1;j<=i+1;j++){
            cout << j;
        }
        for(int j=i;j>=1;j--){
            cout << j;
        }
        cout << endl;
    }

    return 0;
}