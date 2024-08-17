class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        count=1;
        n=len(nums);
        for i in range(0,n):
            if nums[i]!=nums[count-1]:
                nums[count]=nums[i]
                count+=1
    
        return count;