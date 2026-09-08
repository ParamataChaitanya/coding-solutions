# Group Anagrams

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of strings `strs`, group the anagrams together. You can return the answer in  **any order**.

 

 **Example 1:** 

 **Input:**  strs = ["eat","tea","tan","ate","nat","bat"]

 **Output:**  [["bat"],["nat","tan"],["ate","eat","tea"]]

 **Explanation:** 

- There is no string in strs that can be rearranged to form "bat".
- The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
- The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.

 **Example 2:** 

 **Input:**  strs = [""]

 **Output:**  [[""]]

 **Example 3:** 

 **Input:**  strs = ["a"]

 **Output:**  [["a"]]

 

 **Constraints:** 

- 1 <= strs.length <= 104
- 0 <= strs[i].length <= 100
- strs[i] consists of lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 6 ms (beats 99.19%)  
**Memory:** 23.3 MB (beats 97.19%)  
**Submitted:** 2026-09-08T09:55:48.974Z  

```cpp
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(const string& s:strs)
        {
            string k=s;
            sort(k.begin(),k.end());
            mp[k].push_back(s);
        }
        vector<vector<string>>ans;
        ans.reserve(mp.size());
        for(auto& a:mp)
        {
            ans.push_back(move(a.second));
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/group-anagrams/)