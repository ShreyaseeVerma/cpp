// waf linear search using vector.

#include <iostream>
#include <vector>
using namespace std;

int linear(vector<int> &vec,int s){
    
    for(int val:vec){
        
        if(s==val){
            return val;
            
        }
    }
    
    return -1;
}

int main()
{
    int s;
    cout <<"enter the number:" << endl;
    cin >> s;
    vector<int> num={1,2,3,4,5,6,7,8,9,10};
    
    int ans = linear(num, s);

    if (ans == -1)
    {
        cout << "Number not found." << endl;
    }
    else
    {
        cout << "Number found: " << ans << endl;
    }
    return 0;
}





