# Self Dividing Numbers

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

A  **self-dividing number**  is a number that is divisible by every digit it contains.

- For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.

A  **self-dividing number**  is not allowed to contain the digit zero.

Given two integers `left` and `right`, return  *a list of all the  **self-dividing numbers**  in the range*  `[left, right]` (both  **inclusive**).

 

 **Example 1:** 

```
Input: left = 1, right = 22
Output: [1,2,3,4,5,6,7,8,9,11,12,15,22]

```

 **Example 2:** 

```
Input: left = 47, right = 85
Output: [48,55,66,77]

```

 

 **Constraints:** 

- 1 <= left <= right <= 104

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 7.9 MB  
**Submitted:** 2026-09-16T14:30:06.095Z  

```cpp
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++)
        {
            int num=i;
            bool selfdividing=true;
            while(num!=0)
            {
                int dig=num%10;
                if(dig==0 || i%dig!=0)
                {
                    selfdividing=false;
                    break;
                }
                num=num/10;
            }
            if(selfdividing)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/self-dividing-numbers/)