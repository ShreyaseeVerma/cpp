#include <iostream>
#include <vector>
using namespace std;
int binarysearch(vector<int>& nums,int t){
        int n=nums.size();
      int  start = 0 , end = n-1;
      int mid=0;
      while(start <= end){
          mid=start+(end-start)/2;
          if(t > nums[mid]){
              start=mid+1;
          }
          
         else  if(t < nums[mid]){
              end=mid-1;
          }
         else{
             return mid;
         }
      }
      
   return -1; 
}


int main()
{
   vector<int> arr={-1,1,3,5,6,66};
   int target;
   cout << "enter the target:" << endl;
   cin >> target;
  cout << binarysearch(arr,target) << endl;
   

    return 0;
}