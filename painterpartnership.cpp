// painter partner

#include <iostream>
#include <vector>
using namespace std;
 bool isvalid(vector<int>nums,int n,int m,int mid){
        int painters=1;
        int t=0;
        for(int i=0;i<n;i++){
            if(t+nums[i] <= mid){
                t += nums[i];
            }
            else{
                painters ++;
                t= nums[i];
            }
        }
         return  painters > m ? false:true;
    }
int Timeallocation(vector<int>nums,int m){
    int n=nums.size();
    int maxlength=0;
    int sum=0;
    for(int i=0;i<n;i++){
        if(nums[i] > maxlength){
            maxlength=nums[i];
        }
    }
    for(int i=0;i<n;i++){
        sum += nums[i];
    }
    int st=maxlength;
    int end=sum;
    int mid=0;
    int ans=0;
    while(st < end){
        mid=st+(end-st)/2;
        if(isvalid(nums,n,m,mid)){
            ans=mid;
            end=mid;
        }
        else{
            st=mid+1;
        }
    }
   return st; 
}
int main()
{
  vector<int> arr={40,30,10,20};
    int m=2;
  cout << Timeallocation(arr,m) << endl;
}