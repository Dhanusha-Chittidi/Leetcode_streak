/*

Author : Dhanusha Chittidi
Problem :713. Subarray Product Less Than K
Question Link(Leetcode) : https://leetcode.com/problems/subarray-product-less-than-k/
*/

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int cnt=0,n=nums.size();
    
        int i=0,j=0;
        int product=1;
        while(j<n){
            
            product*=nums[j];
            while(i<=j && product>=k){
                product/=nums[i];
                i++;
            }
            cnt+=j-i+1;
            j++;
            
            
        }
        return cnt;
            
        
    }
};
