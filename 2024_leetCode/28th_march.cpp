/*

Author : Dhanusha Chittidi
Problem :2958. Length of Longest Subarray With at Most K Frequency
Question Link(Leetcode) : https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/?envType=daily-question&envId=2024-03-28
*/
class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0;
        unordered_map<int,int>m;
        int ans=0;
        while(j<n){
            ++m[nums[j]];
            if(m[nums[j]]<=k)
                ans=max(ans,j-i+1);
            else{
                while(i<=j && m[nums[j]]>k){
                    --m[nums[i]];
                    i++;
                }
                ans=max(ans,j-i+1);
            }
            j++;
        }
        return ans;
    }
};
