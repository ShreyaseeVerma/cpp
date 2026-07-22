#include <iostream>
#include <vector>
using namespace std;
int MajorityEle(vector<int> vec){
         int n=vec.size();
            for(int i=0;i<n;i++){
                int feq=0;
                for(int j=0;j<n;j++){
                    
                    if(vec[i]==vec[j]){
                        feq++;
                    }
                }
                
                 if(feq > n/2){
                        return  vec[i];
                    }
            }
            
     return -1; 
  }  
int main()
{
  vector<int> arr={2,3,4,2,5,2,2,2};
  
    int ans = MajorityEle(arr);
  cout << ans << endl;
    return 0;
}