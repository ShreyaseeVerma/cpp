#include <iostream>
#include <vector>
using namespace std;
int peak(vector<int>& nums){
    int n=nums.size();
    int mid;
    int st=0,end=n-1; 
    while(st <= end){
        mid=st+(end-st)/2;
        if(nums[mid-1] < nums[mid] && nums[mid+1] < nums[mid]){
             return mid;
        }
        else if(nums[mid-1] < nums[mid]){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
   return -1; 
}
int main()
{
    vector<int> arr={1,2,6,4,1,0};
    cout << peak(arr) << endl;

    return 0;
}  