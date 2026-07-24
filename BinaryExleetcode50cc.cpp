//compute x^n.....leetcode-50
//#include <algorithm>
//#include <vector>
#include <iostream>
using namespace std;
double binaryExponen(long num,int po){
    long BinF=po;
    double ans=1;
    //for corner cases:-
    if(po==0) return 1.0;
    if(num==0) return 0.0;
    if(po==1) return 1.0;
    if(num==-1 && po%2 == 0) return 1.0;
    if(num==-1 && po%2 != 0) return -1.0;
    
    if(num<0){
        num=1/num;
        BinF=-BinF;
    }
    
    
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
    int x=-1;
    int n=5;
  cout << binaryExponen(x,n); 
    return 0;
}