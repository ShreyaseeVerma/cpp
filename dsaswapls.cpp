//WAF to swap the max and min number of an array.
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
void swapm(int arr[],int size){
    
   int minn=INT_MAX;
   int maxx=INT_MIN;
   
   int indexs = 0;
    int indexl = 0;
    
   for(int i=0;i<size;i++){
       
       if(arr[i]<minn){
           minn=arr[i];
           indexs=i;
           
       }
         
          if(arr[i]>maxx){
           maxx=arr[i];
           indexl=i;
           
       }
         
 }
    swap(arr[indexs],arr[indexl]);
   
   
}

int main()
{  
    int size=7;
    int arr[size]={1,67,6,9,23,34,94};
    
     swapm(arr,size) ;
     for(int i=0;i<size;i++){
         
         cout<< arr[i] << " ";
     }
    return 0;
}






