// Tags : XOR Operation
// Given an array of numbers nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once.

// Example:

// Input:  [1,2,1,3,2,5]
// Output: [3,5]
// Note:

// The order of the result is not important. So in the above example, [5, 3] is also correct.
// Your algorithm should run in linear runtime complexity. Could you implement it using only constant space complexity?


class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        int xo=0;
        int x=0,y=0;
        for(int i=0;i<n;i++)
            xo=xo^nums[i];
        int setbit=xo & ~(xo-1);
        for(int i=0;i<n;i++)
        {
            if(setbit & nums[i])
                x=x^nums[i];
            else
                y=y^nums[i];
        }
        vector<int>ans;
        ans.push_back(x);
        ans.push_back(y);
        return ans;
    }
};