#include <iostream>
#include <vector>
using namespace std;
int binarysearch(vector<int>& nums,int t){
        int n = nums.size();
      int  start = 0 , end = n-1;
      int mid;
      while(start <= end){
          mid=start+(end-start)/2;
          if(nums[mid]==t){
              return mid;
          }
          if(nums[start] <= nums[mid]){
              if(nums[start] <= t && t <= nums[mid]){
              
                     end=mid-1;
              }
              else{
                     start=mid+1;    
                     }
              }
             else{
                 if(nums[mid] <= t && t <= nums[end]){
                     start=mid+1;
                 }
                 else{
                     end=mid-1;
                 }
             } 
              
          }
          
      
      
   return -1; 
}


int main()
{
   vector<int> arr={4,5,6,7,0,1,2};
   int target;
   cout << "enter the target:" << endl;
   cin >> target;
  cout << binarysearch(arr,target) << endl;
   

    return 0;
}