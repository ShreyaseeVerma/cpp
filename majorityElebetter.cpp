//finding majority of element using better aapproach.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int MajorityEle(vector<int> vec){
  int  freq=1;
  int ans=vec[0];
         int n=vec.size();
         sort(vec.begin(),vec.end());
            for(int i=1;i<n;i++){
                
            if(vec[i] == vec[i-1]){
                  freq++; 
                
            }
            else{
                    freq=1;
                    ans=vec[i];
                }
                
                if(freq > n/2){
                ans=vec[i-1];
                return ans;
            }
                
                
            }
    return -1; 
  }  
int main()
{
  vector<int> arr={1,2,2,2,2};
   cout <<  MajorityEle(arr) << endl;
    return 0;
}