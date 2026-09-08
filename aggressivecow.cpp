// aggressive cow
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isvalid(vector<int>nums,int n ,int cow,int mid){
    int c=1;
    int d=nums[0];
    for(int i=0;i<n;i++){
    if(nums[i] - d >= mid){
        c++;
        d=nums[i];
        
    }
    }
    if(c >= cow){
        return true;
    }
    else{
        return false;
    }
}
int possibledistance(vector<int>nums,int cow){
    int n=nums.size();
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(nums[j] > nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
    }
    int mindistance=nums[1]-nums[0];
    int maxdistance=nums[n-1] - nums[0];
    
    int st=mindistance;
    int end=maxdistance;
    int mid=0;
    int ans=0;
    while(st <= end){
        mid=st+(end-st)/2;
        if(isvalid(nums,n,cow,mid)){
            ans=mid;
            st=mid + 1;
        }
        else{
            end=mid-1;
        }
    }
    
   return ans; 
}
int main()
{
  vector<int>arr={1,2,4,8,9};
  int c=3;
 cout << possibledistance(arr,c) << endl;
   
    return 0;
}