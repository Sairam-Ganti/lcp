#include <vector>
#include <string>
#include <map>

using namespace std;

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
    ListNode* removeElements(ListNode* head, int val) {
     ListNode *a = NULL;
        ListNode *b = NULL;

        while(head) {
            //Keep the head steady push the tail
            if(head -> val != val) {
            if(b){
                //check for tail not null and keep increasing index of tail
                b->next = head;
                b = b->next;
            }else{
                //if tail is null, case with element 1, then set both  head and tail to the element that eill be the head
                b = head;
                a = head;
            }
            }
            head = head -> next;
        }
        //set final null tail
        if(b){
            b->next = NULL;
        }
        return a;
    }
};