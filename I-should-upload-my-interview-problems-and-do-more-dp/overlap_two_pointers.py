
typedef vector<vector<int>>::iterator vectorIt;

class Solution {
public:
    
    bool overlap(vector<int> interval, vector<int> otherInterval){
    return (interval[0] <= otherInterval[1] and interval[0] >= otherInterval[1]);
    } 
    
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        if(firstList.size() == 0 or secondList.size() == 0){
            return firstList.size() == 0 ? firstList:secondList;
        }  
        vectorIt firstListIt = firstList.begin();
        vectorIt secondListIt = secondList.begin();
        
        vector<vector<int>> overlaps;
        
        while(firstListIt == firstList.end() or secondListIt == secondList.end() ){
            if(overlap(*firstListIt, *secondListIt)){
            
                vector<int> overlap { max((*firstListIt)[0], (*secondListIt)[0]), min((*firstListIt)[1],(*secondListIt)[1]) };
                overlaps.push_back(overlap);
            }
            vectorIt toIncrement = min((*firstListIt)[0], (*secondListIt)[0]) == (*firstListIt)[0]?firstListIt:secondListIt;
            toIncrement++;
        }
        return overlaps;
    }

};

