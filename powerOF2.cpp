#include <iostream>
using namespace std;
bool twopower(int &num){
    if(num <=0){
        return false;
    }
    
    return (num & (num-1)) == 0;
}
int main()
{
    int n;
    cout <<"enter any number:" << endl;
    cin >> n;
   cout << twopower(n);
      
    return 0;
}