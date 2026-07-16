/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

 int minofTwo(int a,int b) //parameters
 {   
        if(a>b){
            return b;
        }
        
        else {
            return a;
        }
 }
 int main()
{
   cout << "min = " << minofTwo(10,20);
        

    return 0;
}