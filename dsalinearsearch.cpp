/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// in array using linear search opreation.
#include <iostream>
using namespace std;

int Linearsearch(int arr[],int size,int num){
          for(int i=0;i<size;i++){
               if(arr[i]==num){
                   return i;
                   }}
                   return -1;}
int main()
{
  int size=10;    
  int arr[size]={11,22,33,44,55,66,77,88,99,100};
  int num;
  cout <<"enter a number:" << endl;
  cin >> num;
  
  cout << "The number is found and its index number is:" << Linearsearch(arr,size,num) << endl;

    return 0;
}










