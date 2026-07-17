/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// Find the largest and smallest in the array.
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int size=10;
    int arr[size]={23,15,16,76,98,05,76,77,66,54};

    int smallest=INT_MAX;
    int indexs;
    for(int i=0;i<size;i++){
       // smallest=min(arr[i],smallest);
       // largest=max(arr[i],largest);
        if(arr[i]<smallest){
            smallest=arr[i];
            indexs=i;
        }
    }
     cout << "The samllest number is:" << smallest << endl;
    cout << "The samllest number its index is:" << indexs << endl;
    int indexl;
    int largest=INT_MIN; 
    for(int i=0;i<size;i++){
        
        if(arr[i]>largest){
            largest=arr[i];
             indexl=i;
        }
    }
     cout << "The largest number is:" << largest << endl;
    cout << "The Largest number its index is:" << indexl << endl;


    return 0;
}