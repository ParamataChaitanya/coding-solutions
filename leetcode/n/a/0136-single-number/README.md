# Single Number

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given a  **non-empty**  array of integers `nums`, every element appears  *twice*  except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

 **Example 1:** 

 **Input:**  nums = [2,2,1]

 **Output:**  1

 **Example 2:** 

 **Input:**  nums = [4,1,2,1,2]

 **Output:**  4

 **Example 3:** 

 **Input:**  nums = [1]

 **Output:**  1

 

 **Constraints:** 

- 1 <= nums.length <= 3 * 104
- -3  *104 <= nums[i] <= 3*  104
- Each element in the array appears twice except for one element which appears only once.

## Solution

**Language:** Python  
**Runtime:** 7 ms (beats 29.55%)  
**Memory:** 21.5 MB (beats 19.45%)  
**Submitted:** 2026-10-06T07:25:24.022Z  

```py
class Solution:
    def singleNumber(self, nums: list[int]) -> int:
        freq={}
        for num in nums:
            if num in freq:
                freq[num]+=1
            else:
                freq[num]=1
        for value in freq:
            if freq[value]==1:
                return value
```

---

[View on LeetCode](https://leetcode.com/problems/single-number/)