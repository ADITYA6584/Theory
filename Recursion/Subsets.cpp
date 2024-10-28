//It is a leetcode question (Medium level question).
#include <iostream>
using namespace std;
#include <vector>

class Solution {
private:
    void findans(vector<int> nums,vector <vector<int>> &ans,vector<int> output, int index)
    {
        //base case
        if(index>=nums.size())
        {
            ans.push_back(output);
            return ;
        }

        //exclude
        findans(nums,ans,output,index+1);

        //Include
        int ele = nums[index];
        output.push_back(ele);
        findans(nums,ans,output,index+1);
        return ;
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector <vector <int>> ans;

        //Creating an output array
        vector <int> output;

        //Index 
        int index =0;

        //Recursion function call
        findans(nums,ans,output,index);

        return ans;
    }
};