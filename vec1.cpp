//find the single number using linear runtime time complexity.

#include <iostream>
#include <vector>
using namespace std;
int single(vector <int>& nums){
    int ans=0;
    for(int val:nums){
        ans=ans^val;
    }
    return ans;
}

int main()
{
	vector<int> vec={2,3,4,3,4};
	
	cout <<"single value is:" << single(vec) << endl;

	return 0;
}



