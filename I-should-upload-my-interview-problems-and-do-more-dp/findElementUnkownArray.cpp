int elementAt(int index);

 
//1 3  5 6 8 23 45 67 345 56789....234356 12345 34567 12345678 1567812345678  xx xx


// arrayIny is sorted in increasing
int fintElement(int element, int* arrayInt){

    int halfUpperBoundOfLen = 2**31-1; // check MAX_32_INTEGER//2
	loopUp = elementAt(halfUpperBound)
    while(lookUp == ERROR){
        halfUpperBoundOfLen = halfUpperBoundOfLen/2;
        try: 
        	loopUp = elementAt(halfUpperBoundOfLen)
        Exception:
        	loopUp=ERROR
    }
    upperBound = halfUpperBound*2-1;
    lowerBound = 0;
    
    while(lookUp != element){
    	if(lookUP > element){
    		upperBound = halfUpperBoundOfLen-1;
    		
    	}else{
    		lowerBound = halfUpperBoundOfLen+1;
    	}
    	loopUp = elementAt(lowerBound+(upperBound-LowerBound)/2)
    }
    
}

