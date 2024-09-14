#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
    vector<int> reverseArray(vector<int> &arr)
    {
        int size=arr.size();
        vector<int> temp(size);
        for(int i=0; i<size; i++)
        {
            temp[size-1-i]=arr[i];
        }

        return temp;
    }
};
int main()
{
    Solution s1;
    vector<int> arr= {1,2,3,4};
    vector<int> ans=s1.reverseArray(arr);
    for(int i : ans)
    {
        cout<<i<<endl;
    }
    return 0;
}
