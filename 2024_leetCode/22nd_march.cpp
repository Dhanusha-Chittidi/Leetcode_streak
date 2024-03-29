/*

Author : Dhanusha Chittidi
Problem : 234. Palindrome Linked List
Question Link(Leetcode) : https://leetcode.com/problems/palindrome-linked-list/?envType=daily-question&envId=2024-03-22

*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int>v;
        ListNode* temp=head;
        
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int n=v.size();
        for(int i=0;i<n/2;i++){
            if(v[i]!=v[n-i-1]) return false;
        }
        
        return true;
    }
};