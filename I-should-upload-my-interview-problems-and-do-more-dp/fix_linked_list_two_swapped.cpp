Node* solution(Node* listToFix) {
    if listTofix == NULL or listtoFix->next == NULL return list;
    //len(listToFix)>1
    //First loop to delete unsorted two elements
    Node* currentNode = listToFix;
    Node* currentNodeNext = listToFix->next;
    Node* nodeToInsert = NULL;
    while(currentNodeNext!=NULL){
        while (currentNode->value < currentNodeNext->value and currentNodeNext!=NULL) {
            currentNode = currentNodeNext;
            currentNodeNext = currentNode->next;
        }
        //Reconnect deleting currentNodeNext
        currentNode->next = currentNodeNext->next;
        if (nodeToInsert == NULL) nodeToInsert = currentNodeNext;
        else nodeToInsert->next = currentNodeNext;
    }

    //Second loop to insert them
    while(nodeToInsert != NULL){
        Node* toInsert = nodeToInsert;
        nodeToInsert = nodeToInsert->next;
        } 
        Node* current = listToFix;

        if(toInsert->value < current->value){
            toInsert->next = current;
            listToFix = toInsert;
            break;
        }
        while(current->next !=NULL and  current->value < tooInsert->value and current->next->value < nodeToInsert->value){
            currentNode = currentNode->next;
        }
        // insert at the end
        if(currentNode->next == NULL){
            current->next = toInsert;
            toInsert->next = NULL;
        } 
        //insert between current and its next
        Node* newToInsertNext = current->next;
        current->next = toInsert;
        toInsert->next = newToInsertNext;

    }
    return listToFix
}

