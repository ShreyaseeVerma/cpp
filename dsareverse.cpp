/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// Reverse array.
#include <iostream>
#include <algorithm>
using namespace std;

int reverse(int arr[],int size){
    int start=0,end=size-1;
    while(start<end){
    
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    return 0;
}

int main()
{
  int size=8;
  int arr[size]={1,2,3,4,5,6,7,8};
  
      reverse(arr,size) ;
      
      for(int i=0;i<size;i++){
          cout << arr[i] ;
          
      }
      
      
    return 0;
}










