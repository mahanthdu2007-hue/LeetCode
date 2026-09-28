#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public: vector<int> twosum(vector<int> nums, int target)
    {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(target== nums[i]+nums[j])
                return {i,j};

            }
        }
        return {};
    }
};
int main()
{
    vector<int> nums = {2,3 ,5 , 5, 3};
    int target = 10;

    Solution obj;

    vector<int> ans = obj.twosum(nums,target);

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}