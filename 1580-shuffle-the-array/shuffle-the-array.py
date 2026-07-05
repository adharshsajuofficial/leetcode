class Solution:
    def shuffle(self, nums, n):
        result = []
        
        # Loop through the first n elements
        for i in range(n):
            result.append(nums[i])       # Append x_i
            result.append(nums[i + n])   # Append y_i
            
        return result