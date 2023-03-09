//Given an integer array nums, find the subarray with the largest sum, and return its sum.
class Solution {
public:
    int maximum(vector<int>& nums){
        int maximum = INT_MIN;
        for(int i = 0 ; i < nums.size(); i++){
            if(maximum  < nums.at(i)){
                maximum = nums.at(i);
            }
        }
        return maximum;
    }

    int maxSubArray(vector<int>& nums) {

        int currSum = nums.at(0);
        vector<int> maxSum;
        maxSum.push_back(currSum);

        for(int i = 1 ; i < nums.size(); i++){
            if(currSum < 0){
                currSum = 0;
            }
            currSum += nums.at(i);
            maxSum.push_back(currSum);
        }
    return maximum(maxSum);
    }
};
