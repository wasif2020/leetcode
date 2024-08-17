class Solution:
    def reverse(self,nums: List[int], s: int, e: int)-> None:
        while s<e:
            nums[s],nums[e]=nums[e],nums[s]
            s+=1
            e-=1
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n=len(nums);
        k=k%n;
        self.reverse(nums,n-k,n-1);
        self.reverse(nums,0,n-k-1);
        self.reverse(nums,0,n-1);