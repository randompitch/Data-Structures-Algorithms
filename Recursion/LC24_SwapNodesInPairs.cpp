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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(0,head);
        ListNode* prev = dummy;
        ListNode* curr = head;
        while(curr != NULL && curr->next != NULL){
            ListNode* nxt = curr->next->next;
            ListNode* scd = curr->next;

            scd->next = curr;
            curr->next = nxt;
            prev->next = scd;

            prev = curr;
            curr = nxt;
        }
        return dummy->next;
    }
};