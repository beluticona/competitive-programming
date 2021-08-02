Given a array of prices [2,3,4] (for all p in prices, p>0), 
return max profit -> find the best pair of index (buy,sell) that maximize the diff


[1,2,3,4,5,1,6]

            4->{3}
        2{1}       5{4}
    1{0,5}        3{2}        6{6}

BST//O(nlogn)

TimeComplexity : O(nlogn)
SpaceComplexity: O(n)
    
buy_index from 0 to len(prices): //O(n)
    BST.erase(prices[buy_index]) //O(logn)
    find max key in p[buy_index...end] //
    check a better solution has been found, if so update current solution //O(1)
