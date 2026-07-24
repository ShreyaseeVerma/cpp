//container with most water.....leetcode-11
#include <algorithm>
#include <vector>
#include <iostream>
#include <climits>
using namespace std;

int MaxCon(vector<int>& h){
   int n=h.size();
   int st=0,end=n-1;
   int area=INT_MIN;
   int width=0;
   int height=INT_MIN;
  while(st < end){
       width=end - st;
       height=min(h[st],h[end]);
       area=max(area,width*height);
       
       if(h[st] < h[end]){
           
       st++;
       }
       else{
          end-- ;
       }
       
   }
    return area;
}

int main()
{
    vector<int> height={1,8,6,2,5,4,8,3,7};
    cout << MaxCon(height);
    
    return 0;
}