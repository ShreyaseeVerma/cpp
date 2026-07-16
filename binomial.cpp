/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

 int binomial(int n, int r){ 
     int bino;
      int factn=1;
      int s=n-r;
            for(int i=1;i<=n;i++){
                
                factn=factn*i;
            }
            int factr=1;
            for(int i=1;i<=r;i++){
                
                factr=factr*i;
            }
            int facts=1;
            for(int i=1;i<=s;i++){
                
                facts=facts*i;
            }
           bino=factn / ( factr * facts );
            
     return bino;
     
 }


int main()
{
    int n,r;
   cout << "enter n of binomial:" << endl;
   cin >> n;
    cout << "enter r of binomial:" << endl;
   cin >> r;
   cout << "The binomial coefficient is:" << binomial(n,r);

    return 0;
}





