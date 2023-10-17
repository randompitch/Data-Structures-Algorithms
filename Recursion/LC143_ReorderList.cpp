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
    void reorderList(ListNode* head) {
        if(head == NULL || head->next == NULL || head->next->next == NULL){
            return;
        }
        
        ListNode* scdlast = head;
        while(scdlast->next->next){
            scdlast = scdlast->next;
        }

        scdlast->next->next = head->next;
        head->next = scdlast->next;

        scdlast->next = NULL;

        reorderList(head->next->next);

    }
};