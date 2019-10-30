#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Oct 29 23:31:00 2019

@author: stevedeng
"""

#Input: [-2,1,-3,4,-1,2,1,-5,4],
#Output: 6
#Explanation: [4,-1,2,1] has the largest sum = 6.

class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums)==1:
            return nums[0]
        
        #it will not begin and end with a negative number
        sum=0
        maxSum=0
        for num in nums:
            if num<0:
                maxSum=max(sum,maxSum)
                
            sum+=num
            
            #if the sum is less than 0 then should start with new
            if sum<0 :
                sum=0
        
        if sum>maxSum:
            maxSum=sum
        
        if maxSum==0:
            maxSum=max(nums)
            
        return maxSum