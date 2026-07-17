//WAF to print all the unique value in the array.
#include <iostream>
using namespace std;

void unique(int arr[],int size){
     
    for(int i=0;i<size;i++){
        int  count=0;
         for(int j=0;j<size;j++){
               
              if(arr[i] == arr[j]){
                  
                   count++;
              }
        }
        
                       if (count==1){
                  cout << arr[i] << " "; 
     }
    }
}
int main(){  
   
    int size;
    cout << "enter the size of array:" << endl;
    cin >> size;
    cout << "enter an array element:";
     int arr[size];
     for(int i=0;i<size;i++){
         cin >> arr[i] ;
         cout << endl;
     }
    
    cout << "unique values: " ;
     unique(arr,size);
     
    
    return 0;
}


