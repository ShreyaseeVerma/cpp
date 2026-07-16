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
    cout << "enter a number" << endl;
    cin >> m;
   
    for(int i=1;i<=m;i++){
        for(int num=i;num>=1;num--){
          cout << num << " "; 
         
            }
            cout << endl;
    }
    return 0;
}