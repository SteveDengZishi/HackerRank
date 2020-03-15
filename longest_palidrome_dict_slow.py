class Solution(object):
    def isPalindrom(self, s):
        s1 = s
        if(s[::-1] == s1):
            return True
        else:
            return False
        
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        maxLen = len(s)
        
        if maxLen == 0:
            return ""
        
        ascii_list = [chr(x) for x in range(ord('A'), ord('z') + 1)]
        num_list = [x for x in range(10)]
        ascii_list.extend(num_list)
        #print(ascii_list)
        
        dic = {}
        palist = [] 
        
        #produce dictionary O(1)*O(N)
        for c in ascii_list:
            for i, val in enumerate(s):
                if val == str(c):
                    if val in dic:
                        dic[val].append(i)
                    else:
                        dic[val] = [i]
                    
        for key, val in dic.items():
            #print(key, val)
            #eligible to be palindrome
            if len(val) > 1:
                for i in val:
                    for j in val:
                        if i != j:
                            #print(s[i:j+1])
                            if self.isPalindrom(s[i:j+1]):
                                if s[i:j+1] != "":
                                    palist.append(s[i:j+1])
        
        #print(palist)
        if len(palist) == 0:
            return s[0]
        else:
            return max(palist, key=len)
