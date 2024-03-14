/*

Author : Dhanusha Chittidi
Problem : Binary Subarrays With Sum
Question Link(Leetcode) : https://leetcode.com/problems/binary-subarrays-with-sum/?envType=daily-question&envId=2024-03-14


*/
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>m;
        m[0]=1;
        
        int ans=0, n=nums.size(), sum=0;
        //Using kadane's algorithm
        for(int i=0;i<n;i++){
            
            sum+=nums[i];
            if(m.count(sum-goal)){
                ans+=m[sum-goal];
            }
            m[sum]++;
        }
        return ans;
    }
};