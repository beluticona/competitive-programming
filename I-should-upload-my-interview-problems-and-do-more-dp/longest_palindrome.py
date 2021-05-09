def longestPalindrome(s):
	longestPalindromeLength = 0
	longestPalindromeStartingPosition = 0
	stringSize = len(s)
	dp = [[0 for _ in range(stringSize)] for _ in range(stringSize) ] // [[0]]
	
	for start in range(stringSize-1, -1, -1): // start = 0
		for end in range(start+1, stringSize): // end = 1 
			if s[start] == s[end]:
				if end - start == 1 or dp[start+1][end-1]: 
					dp[start][end] = True
					if longestPalindromeLength < end-start+1:
						longestPalindromeStartingPosition = start
						longestPalindromeLength = end-start+1
	return s[longestPalindromeStartingPosition, longestPalindromeStartingPosition + longestPalindromeLength]
	
TEST

CASE EMPTY

longestPalindrome("") OK

CASE ONECHAR

longestPalindrome("a")

CASE SIZETWO



'''
|s| = 0 then return s, Yes
|s| = 1 then return s, Yes
|s| = 2 if s[start] == s[end] return s, Yes
		else any char
|s| > 2 if s[start] == s[end] and isPalindrome(start+1, end-1) return s, Yes			


x a bcdc b
0 1 2345 6
'''


