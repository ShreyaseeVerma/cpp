//convert binary to decimal.
#include <iostream>

using namespace std;

int binTodecimal(int num){
   int ans=0;
   int p=1;//pow=10^0
    while(num > 0){
         int rem=num%10;
          num=num/10;
         ans=ans+( rem*p);
         p=p*2;
    }
    return ans;
}
int main()
{
    int n;
    cout <<"enter binary digit convert into decimal:" << endl;
    cin >> n;
  
    cout <<"decmial is:" << binTodecimal(n) << endl;
    
    
    
    return 0;
}