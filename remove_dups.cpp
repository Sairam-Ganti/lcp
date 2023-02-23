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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next == NULL){
            return head;
        }
        ListNode* currNode = head->next;
        ListNode* prevNode = head;
        // int elem = head->val;
        while(currNode!=NULL){
        if(currNode->val==prevNode->val){
            currNode = currNode->next;
           }
           else{
                prevNode->next = currNode;
                prevNode = currNode;
                currNode = currNode->next; 
           }
        }
        prevNode->next = currNode;
        prevNode = currNode;
    return head;
    }
};