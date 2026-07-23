//compute x^n.....leetcode-50
//#include <algorithm>
//#include <vector>
#include <iostream>
using namespace std;
double binaryExponen(long num,int po){
    double ans=1;
    long BinF=po;
    while(BinF > 0){
        if(BinF%2 == 1){
            ans *= num;
        }
        num *= num;
         BinF = BinF/2 ;
    }
    return ans;
}
int main()
{
    int x=3;
    int n=5;
  cout << binaryExponen(x,n); 
    return 0;
}