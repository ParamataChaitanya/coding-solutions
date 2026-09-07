class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        maxi=0
        a=[]
        for i in nums:
            maxi+=i
            a.append(maxi)
        return a    
