/*

Author : Dhanusha Chittidi
Problem : Product of Array Except Self
Question Link(GFG) : https://leetcode.com/problems/product-of-array-except-self/?envType=daily-question&envId=2024-03-15


*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,1);
        
        int leftPro=1,rightPro=1;
        
        for(int i=1;i<n;i++){
            leftPro*=nums[i-1];
            ans[i]=leftPro;
        }
        
        for(int j=n-2;j>=0;j--){
            rightPro*=nums[j+1];
            ans[j]*=rightPro;
        }
        
        return ans;
        
    }
};