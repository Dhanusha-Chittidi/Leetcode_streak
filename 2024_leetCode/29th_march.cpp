/*

Author : Dhanusha Chittidi
Problem : 2962. Count Subarrays Where Max Element Appears at Least K Times
Question Link(Leetcode) : https://leetcode.com/problems/count-subarrays-where-max-element-appears-at-least-k-times/submissions/
*/
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        long long i=0,j=0;
        
        long long maxm=0,ans=0,cur=0;
        
        for(int l=0;l<n;l++){
            maxm=max((int)maxm,nums[l]);
        }
        
        while(j<n){
            cur+=nums[j]==maxm;
            
            while(cur>=k)
                cur-=(nums[i++]==maxm);
            ans+=i;
            j++;
        }
        return ans;
    }
};
