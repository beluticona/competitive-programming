/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 ListNode* reversedListFrom(ListNode* listToReverse){
     if(!listToReverse->next) return listToReverse;
     ListNode* reversed = listToReverse;
     ListNode* toInsertBeforeReversed = listToReverse->next;
     reversed->next = NULL; // A-NULL
     ListNode* tail;
     
     while(toInsertBeforeReversed){
        tail = toInsertBeforeReversed->next; //might be NULL //tail = CD | NULL
        toInsertBeforeReversed->next = reversed; //C-B->A
        reversed = toInsertBeforeReversed; 
        toInsertBeforeReversed = tail;
     }
     return reversed;
 }
 /*
 
  A-B-C-D
 A-B-NULL
 -reversed BA
 -toInsertBeforeReversed C
 -tail  D..
 
 */
 
ListNode* Solution::subtract(ListNode* A) {
    if(A == NULL or A->next == NULL) return A;
    
    // Get the middle
    ListNode* slow = A;
    ListNode* fast = A;
    while(fast != NULL ){
        if(fast->next != NULL) fast = fast->next->next;
        else fast = fast->next;
        slow = slow->next;
    }
    
    ListNode* lastNode = reversedListFrom(slow);
    
    //Update first half of original list
    ListNode* secondHalfPtr = lastNode;
    ListNode* currentNode = A;
    ListNode* currentNodePrev = A;
    while(secondHalfPtr != NULL){
        currentNode->val = secondHalfPtr->val - currentNode->val;
        currentNodePrev = currentNode;
        currentNode = currentNode->next;
        secondHalfPtr = secondHalfPtr->next;
        
        
    }
    //Undo reverse second half list
    ListNode* secondHalfInit = reversedListFrom(lastNode);
    
    //Relink first updated half with original second half
     if(currentNode != NULL) currentNode->next = secondHalfInit;
     else currentNodePrev->next = secondHalfInit;
     
     return A;
}

/*
Given linked list 1 -> 2 -> 3 -> 4 -> 5,

You should return 4 -> 2 -> 3 -> 4 -> 5

1) get the middle
2) reverse second half  
    secondRHalf 5-4
    firstHalf   1-2
3) secondRHalf-firstHalf
    reverse secondRHalf
    
*/

