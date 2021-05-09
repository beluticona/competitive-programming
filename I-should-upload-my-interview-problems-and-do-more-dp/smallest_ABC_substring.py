    
Given an string of only As, Bs and CS -> return smallest substring that contains at least one A, one B and one C

Observation: if there is a subtring that comply the restrictions/requierements -> output >=3 

    
INPUTS
- "" -> check if valid input -> raise error with message 
- "a" -> 0
- "abc" -> 3
- "abcabb" -> 3

"aaaaaaa" -> 0
"bbbbbbb" -> 0


Solution's ideas:

If len(string) <3 or any char from {a,b,c} is not in string
    then return 0
else:
    #there are abc in string -> worst case a possible solution len(string) -> sol >=3
    
    1) "accc" 
    
    chars_in_word = {a,c}
    if "acc" have {a,b,c} then string[0:3]:
        if not continue:
            "acc c" 
            if...you get to the end and len(chars_in_word)
            
    


IDEA
if |s| < 3 then error
else:
    s[start..end-1] only have two types of chars and s[end] the one missing- > return s[start..end]

IDEA++



def smallest substring_a_b_c(string):
    if not validABC(string): raise Exception("Not a valid ABC string")
    size_string = len(string)
    
    if size_string < 3: return ""
    else:
        hasAllCharsFromTo = [[{string[_]} for _ in range(string)]  for _ in range(string)]
        start_smallest_solution_substring = 0
        length_solution = 0
        
        for start in range(size_string):
            for end in range(start+1, size_string):
                types_of_chars_from_start_to_end = charTypesInSubstring[start,end-1]
                if string[end] not in types_of_chars_from_start_to_end:
                    charTypesInSubstring[start,end].insert(string[end])
                    # chech if there is a better solution and update it
                    if len(types_of_chars_from_start_to_end) == 3 and end-start+1 < length_solution:
                        start_smallest_solution_substring = start
                        length_solution = end-start+1
    return string[start_smallest_solution_substring:start_smallest_solution_substring+length_solution]



    
TEST
- valid input 
- a input that does not comply the desired conditions/requeriments
