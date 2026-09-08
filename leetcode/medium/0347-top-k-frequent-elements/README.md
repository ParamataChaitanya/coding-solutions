# Top K Frequent Elements

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array `nums` and an integer `k`, return  *the*  `k`  *most frequent elements*. You may return the answer in  **any order**.

 

 **Example 1:** 

 **Input:**  nums = [1,1,1,2,2,3], k = 2

 **Output:**  [1,2]

 **Example 2:** 

 **Input:**  nums = [1], k = 1

 **Output:**  [1]

 **Example 3:** 

 **Input:**  nums = [1,2,1,2,1,2,3,1,3,2], k = 2

 **Output:**  [1,2]

 

 **Constraints:** 

- 1 <= nums.length <= 105
- -104 <= nums[i] <= 104
- k is in the range [1, the number of unique elements in the array].
- It is guaranteed that the answer is unique.

 

 **Follow up:**  Your algorithm's time complexity must be better than `O(n log n)`, where n is the array's size.

## Solution

**Language:** C++  
**Runtime:** 4 ms (beats 34.28%)  
**Memory:** 19 MB (beats 22.59%)  
**Submitted:** 2026-09-08T10:17:28.346Z  

```cpp
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>a;
        //counting the freq 
        // const int &, & for References each string,const for without modifying the orginal data, read-only 
        for(const int& i:nums)
        {
            a[i]++;
        }
        //moving into elemant in map(a) to vector(fre)
        vector<pair<int,int>>fre;
        for(auto& p:a)
        {
            fre.push_back({p.second,p.first});
        }
        //sort the vector in decending order
        sort(fre.rbegin(),fre.rend());
        //store the top k elements in the res vector
        vector<int>res;
        for(int i=0;i<k;i++)
        {
            res.push_back(fre[i].second);
        }
        return res;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/top-k-frequent-elements/)