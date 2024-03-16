
/*

Author : Dhanusha Chittidi
Problem :  Contiguous Array
Question Link(Leetcode) : https://leetcode.com/problems/contiguous-array/?envType=daily-question&envId=2024-03-16


*/
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size(),sum=0,ans=0;
        unordered_map<int,int>m;
        m[0]=-1;
        
        for(int i=0;i<n;i++){
            if(nums[i]==1) sum++;
            else sum--;
            
            if(m.count(sum)) ans=max(ans,i-m[sum]);
            else m[sum]=i;
        }
        return ans;
    }
};