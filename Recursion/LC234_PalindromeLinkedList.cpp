#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* tempHead = NULL;
    void helper(ListNode* head, bool &isP){
        if(head == NULL)    return;
        helper(head->next, isP);
        if(tempHead->val != head->val){
            isP = 0;
            return;
        }
        tempHead = tempHead->next;
    }
    bool isPalindrome(ListNode* head) {
        tempHead = head;
        bool isP = 1;
        helper(head, isP);
        return isP;        
    }
};