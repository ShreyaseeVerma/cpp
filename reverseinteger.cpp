#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int reverse(int num){
    int rev=0;
    int rem=0;
    while(num > 0 ){
          rem = num%10;
          rev = (rev*10) + rem;
          num = num/10;
    } 
    return rev;
}
int main()
{
     int n=897;
     
   cout <<  reverse(n) << endl;
    
   
    return 0;
}