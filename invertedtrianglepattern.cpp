/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
/*
int main()
{
    int n;
    cout <<" enter a number:";
    cin >> n;
    int m=n;
    int j=1;
    
    for(int i=1;i<=n;i++){
        for(int g=0;g<i;g++){
            cout << " ";
        }
        for(int f=1;f<=m;f++){
            cout << j;
        }
        cout << endl  ;
        m--;
        j++;
    }

    return 0;
}
*/

 int main(){
    int n=4;
    
     for(int i=0;i<n;i++){
         
         for(int j=0;j<i;j++){
             cout << " " ;
         }
         
         for(int j=0;j<n-i;j++){
             
             cout << (i+1);
         }
         cout << endl;
         
     }
    
    return 0;
}


















