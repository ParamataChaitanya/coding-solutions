class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        h=0
        s=0
        for i in gain:
            h+=i
            if s<h:
                s=h
        return s;       