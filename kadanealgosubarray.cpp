//WAP to print maximum subarrayusing the kadans algorithm ......time complexity=O(n)
#include <iostream>
#include <climits>
using namespace std;

int main() {
     int size=9;
    int arr[size]={-2,1,-3,4,-1,2,1,-5,4};
    int res=0;
  int maxSum=INT_MIN;
    for(int i=0;i<size;i++){
        
         res += arr[i];
         maxSum=max(res,maxSum);
           if(res<0)  {
               
               res=0;
           }   
          
        }
          
    
    cout << maxSum << endl ;

    return 0;
}