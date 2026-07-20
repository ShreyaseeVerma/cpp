//WAP to print maximum subarray time complexity=O(n)^2
#include <iostream>
#include <climits>
using namespace std;

int main() {
     int size=5;
    int arr[size]={1,2,3,4,5};
    //loop for print maximum subarray
  int maxSum=INT_MIN;
    for(int st=0;st<size;st++){
        int res=0;
        for(int i=st;i<size;i++){
                res += arr[i];
                maxSum=max(res,maxSum);
          
        }
          
    }
    cout << maxSum << endl ;

    return 0;
}