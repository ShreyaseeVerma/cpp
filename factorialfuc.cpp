/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//calculate FACTORIAL 
#include <iostream>
using namespace std;

 int factorial(int n) //parameters
 {   
     int fact=1;
            for(int i=1;i<=n;i++){
                
                fact=fact*i;
            }
            return fact;
 } 
 
 int main()
{
    int n;
    cout << "enter a number for factorial:" << endl;
    cin >> n;
   cout << "factorial = " << factorial(n);
        

    return 0;
}