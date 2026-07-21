#include <iostream>
#include <vector>

using namespace std;

vector<int> pairsum(vector<int> nums, int t){
    int s=nums.size();
    vector<int> ans;
     int start=0, end=s-1;
    
    while(start < end){
        int res= nums[start]+nums[end]; 
        if(res == t){
        ans.push_back(start);
        ans.push_back(end);
        return ans;
        }
       else if(res > t){
            end--;
        }
        else{
            start++;
        }
        
    }
    return {};
}

int main() {
    vector<int> vec={2,7,11,15};
   int target=26;
  vector<int> ans= pairsum(vec,target);
    cout<<ans[0] <<"," << ans[1] << endl;
    return 0;
}