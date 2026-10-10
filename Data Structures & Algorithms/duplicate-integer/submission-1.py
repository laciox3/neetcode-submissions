class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        set1 = set()
        for x in nums:
            if x in set1:
                return True 
            set1.add(x)

        return False
        