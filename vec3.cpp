// waf reverse on vector.

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void reverse(vector<int> &vec,int size){
    int start=0,end=size-1;
    while(start < end){
        
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
}
int main()
{
    vector<int> num={1,2,3,4,5};
    int size=num.size();
    reverse(num,size);
    
    for(int i=0;i<size;i++){
        cout << num[i];
    }
    
    return 0;
}