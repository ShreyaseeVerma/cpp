//WAF to print inersection of 2 array.
#include <iostream>
using namespace std;
void intersection(int arr1[],int arr2[], int size){
    
                for(int i=0;i<size;i++){
    
         for(int j=0;j<size;j++){
               
              if(arr1[i] == arr2[j]){
                   cout << arr1[i] << " "; 
                  break;
                   
              }
        }
        
                       
                 
    } 
    
}


int main()
{
    int size;
    cout << "enter the size of array:" << endl;
    cin >> size ;
    cout <<"enter your first array:";
    int arr1[size];
    int arr2[size];
   
    for(int i=0;i<size;i++){
        cin >> arr1[i];
        cout << endl;
    }
    cout <<"enter your second array:";
    
    for(int i=0;i<size;i++){
        cin >> arr2[i];
        cout << endl;
    }
   
    cout << "here your intersection of 2 array:" << endl;
     intersection(arr1,arr2,size);
    
     return 0;
}