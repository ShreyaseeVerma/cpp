/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

 int countsum(int n){ 
     int sum=0;
     int rem=0;
     for(int i=1;n>0;i++){
         
            rem=n%10;
            n=n/10;
          sum=sum+rem;
     }
     return sum;
 }


int main()
{
    int n;
   cout << "enter number:" << endl;
   cin >> n;
   cout << "sum of number is:" << countsum(n);

    return 0;
}





