class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        #initialize all vars
        lst = [0]
        hashTable = {}
        start = 0
        end = 0
        
        # loop for general case, use emumarates
        for i,val in enumerate(s):
            # always move end cursor to the next
            end = i
            
            # when there is a matched in hashTable, put length into lst
            if val in hashTable:
                # This is the key step, later match invalidate all previous entry
                if hashTable[val] >= start:
                    lst.append(end - start)
                    start = hashTable[val] + 1
            
            # always update or put (val: pos) into hashMap
            hashTable[val] = i
        
        # Handle edge case if s is empty, or no matched
        if s != "":
            lst.append(end - start + 1)
            
        return max(lst)
            
