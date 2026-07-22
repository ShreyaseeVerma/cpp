//finding majority of element using morre's algorithum.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int MajorityEle(vector<int>& vec){
  int  freq=0;
  int ans=0;
         int n=vec.size();
         for (int i=0;i<n;i++){
              if( freq==0){
                  ans=vec[i];
                 freq=1;
              }
              else if(ans==vec[i]){
                 freq++;
              }
              else{
                  freq--;
              }
             
         }
         
         int count=0;
         for(int val:vec){
             if(val == ans){
                 count ++;
             }
         }
         if(count > n/2){
             return ans; 
         }
         else{
             return -1;
         }
        
    
  }  
int main()
{
  vector<int> arr={1,2,3,4,5};
   cout <<  MajorityEle(arr) << endl;
    return 0;
}






