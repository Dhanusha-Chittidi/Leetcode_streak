/*

Author : Dhanusha Chittidi
Problem : Find the Pivot Integer
Question Link(LeetCode) : https://leetcode.com/problems/find-the-pivot-integer/?envType=daily-question&envId=2024-03-13


*/
class Solution {
public:
    int pivotInteger(int n) {
        int sum=n*(n+1)/2;
        
        int left=1,right=n;
        
        while(left<=right){
            int mid=left+(right-left)/2;
            
            int sum_bef_piv=mid*(mid+1)/2;
            int sum_aft_piv=sum+mid-sum_bef_piv;
            
            if(sum_bef_piv== sum_aft_piv) return mid;
            else if(sum_bef_piv<sum_aft_piv) left=mid+1;
            else right=mid-1;
            
        }
        
        return -1;
    }
};