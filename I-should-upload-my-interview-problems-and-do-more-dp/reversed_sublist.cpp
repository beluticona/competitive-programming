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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right) return head;
        stack<int> S;
        ListNode* currentNode = head;
        ListNode* prevLeft;
        currentPosition = 1;
        while(currentPosition < left-1){
            currentNode = currentNode->next;
            currentPosition++;
        }
        prevLeft = currentNode;
        while(currentPosition < right){
            S.push(currentNode);
            currentPosition = currentPosition->next;
        }
        Node* rightNext = currentPosition->next;
        
        // update the head if it is inside the reversed sublist
        if (left) head = currentPosition;
       
        while(!S.empty()){
            prevLeft->next = S.top()
            prevLeft = top;
            S.pop();
        }
        prevLeft->next = rightNext;
        return head;
    }
};

Time Complexity O(n)
Space Complexity 0(n)
Input:
head = [1,2,3,4,5]

prevLeft = node 1  -> 4 -> 3 -> 2 
nextRight = node 5
    
    
STACK
    4
    3
    2


 1  -> 4 -> 3 -> 2   -> 5

left = 2, right = 4
Output: [1,4,3,2,5]


Input: 
head = [5], left = 1, right = 1
Output: [5]



CONSIDERATION:
- len(list) > 0
- 0 <left, right <=len(list) and left <= right
- not sorted
- all node's elements are valid (intergers)
- there might be some repeated elements, not unique

