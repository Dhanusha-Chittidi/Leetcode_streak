/*

Author : Dhanusha Chittidi
Problem : 143. Reorder List
Question Link(Leetcode) : https://leetcode.com/problems/reorder-list/?envType=daily-question&envId=2024-03-23

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
    void reorderList(ListNode* head) {
        stack<ListNode*>s;
        ListNode* temp=head;
        int n=0;
        
        while(temp){
            s.push(temp);
            temp=temp->next;
            n++;
        }
        int val= n/2;
        temp=head;
        ListNode* nxt;
        
        while(temp && val--){
            nxt=temp->next;
            ListNode* last=s.top();
            s.pop();
            
            temp->next=last;
            if(last==nxt) break;
            last->next=nxt;
            
            temp=nxt;
            
        }
        
        nxt->next=NULL;   
           
    }
};