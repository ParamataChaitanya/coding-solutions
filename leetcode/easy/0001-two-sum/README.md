# Two Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an array of integers `nums` and an integer `target`, return  *indices of the two numbers such that they add up to `target`*.

You may assume that each input would have  ***exactly *one solution**, and you may not use the* same* element twice.

You can return the answer in any order.

 

 **Example 1:** 

```
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

```

 **Example 2:** 

```
Input: nums = [3,2,4], target = 6
Output: [1,2]

```

 **Example 3:** 

```
Input: nums = [3,3], target = 6
Output: [0,1]

```

 

 **Constraints:** 

- 2 <= nums.length <= 104
- -109 <= nums[i] <= 109
- -109 <= target <= 109
- Only one valid answer exists.

 

 **Follow-up:** Can you come up with an algorithm that is less than `O(n2)` time complexity?

## Solution

**Language:** Python  
**Runtime:** 1718 ms (beats 27.10%)  
**Memory:** 19.7 MB (beats 95.17%)  
**Submitted:** 2026-09-08T09:26:10.871Z  

```py
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        a=[]
        for i in range(len(nums)-1):
            for j in range(i+1,len(nums)):
                if target==nums[i]+nums[j]:
                    return [i,j]    

```

---

[View on LeetCode](https://leetcode.com/problems/two-sum/)