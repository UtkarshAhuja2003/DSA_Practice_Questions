/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
 */

// @lc code=start
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
        int arr[100000];
    struct ListNode *p=head;
    int i=0;
    while(p){
        arr[i]=p->val;
        p=p->next;
        i++;
    }
    i--;
    p=head;
    for(;i>=0;i--){
        printf("%d ",arr[i]);
        if(arr[i]!=p->val)return false;
        p=p->next;
    }
    return true;
    }
};
// @lc code=end

