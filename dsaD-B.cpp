// waf reverse on vector.

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int decimal(int num){
   int ans=0;
   int p=1;//pow=10^0
    while(num > 0){
         int rem=num%2;
          num=num/2;
         ans=ans+( rem*p);
         p=p*10;
    }
    return ans;
}
int main()
{
    int n;
    cout <<"enter a number to convert into binary:" << endl;
    cin >> n;
  
    cout <<"binary is:" << decimal(n) << endl;
    
    
    
    return 0;
}