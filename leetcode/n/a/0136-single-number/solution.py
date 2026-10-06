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