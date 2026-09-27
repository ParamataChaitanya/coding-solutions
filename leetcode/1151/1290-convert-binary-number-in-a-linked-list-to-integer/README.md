# Convert Binary Number in a Linked List to Integer

![Difficulty](https://img.shields.io/badge/Difficulty-1151-red)

## Problem

Given `head` which is a reference node to a singly-linked list. The value of each node in the linked list is either `0` or `1`. The linked list holds the binary representation of a number.

Return the  *decimal value*  of the number in the linked list.

The  **most significant bit**  is at the head of the linked list.

 

 **Example 1:** 

```
Input: head = [1,0,1]
Output: 5
Explanation: (101) in base 2 = (5) in base 10

```

 **Example 2:** 

```
Input: head = [0]
Output: 0

```

 

 **Constraints:** 

- The Linked List is not empty.
- Number of nodes will not exceed 30.
- Each node's value is either 0 or 1.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 10.6 MB (beats 72.27%)  
**Submitted:** 2026-09-27T05:54:19.298Z  

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int count=0;
        ListNode* temp=head;
        while(temp)
        {
            count++;
            temp=temp->next;
        }
        int ans=0;
        for(int i=count-1;i>=0;i--)
        {
            int t=head->val;
            ans=ans+(t*pow(2,i));
            head=head->next;
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/)