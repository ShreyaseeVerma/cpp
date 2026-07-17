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
    int arr[size];
    cout <<"enter 10 integer:" << endl;
    for (int i=0;i<size;i++){
        cin >> arr[i] ;
        cout << endl;
         }
    int smallest=INT_MAX; 
    for(int i=0;i<size;i++){
        
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    cout << "The samllest number is:" << smallest << endl;
    
    int largest=INT_MIN; 
    for(int i=0;i<size;i++){
        
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout << "The Largest number is:" << largest << endl;


    return 0;
}