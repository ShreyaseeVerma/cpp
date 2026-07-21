#include <iostream>
#include <vector>

using namespace std;
/*
int main() {
     int size=4;
    int arr[size]={2,7,11,15};
    int target=9;
   for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            
            int sum=arr[i]+arr[j];
            if(sum==target){
                
                cout << arr[i] <<"," <<arr[j] << endl;
                break;
            }
        }
        
    }   
    return 0;
}
*/
vector<int> pairsum(vector<int> nums, int t){
    int s=nums.size();
    vector<int> ans;
     for(int i=0;i<s;i++){
         for(int j=i+1;j<s;j++){
             if(nums[i]+nums[j]==t){
                 
                 ans.push_back(i);
                 ans.push_back(j);
                 return ans;
             }
             
         }
         
    }
    }
    

int main() {
    vector<int> vec={2,7,11,15};
   int target=13;
  vector<int> ans= pairsum(vec,target);
    cout<<ans[0] <<"," << ans[1] << endl;
    return 0;
}