#include <iostream>
#include <vector>
using namespace std;
int singlenum(vector<int>& nums){
    int ans=0;
    for(int i=0;i<nums.size();i++){
        
        ans=ans^nums[i];
    }
    return ans;
}
int main()
{
   vector<int> num={2,2,1};
   cout << singlenum(num) << endl;
    return 0;
}