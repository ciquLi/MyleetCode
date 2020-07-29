Given a binary array, find the maximum number of consecutive 1s in this array.

Example 1:
Input: [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s.
    The maximum number of consecutive 1s is 3.
Note:

The input array will only contain 0 and 1.
The length of input array is a positive integer and will not exceed 10,000


C
int findMaxConsecutiveOnes(int* nums, int numsSize){
    int l = 0;
    int max_len = 0;
    for(int i=0; i<numsSize; i++)
    {
        if(nums[i] == 1)
        {
            len++;
            if (len > max_len)
                max_len = len;
        }
        else 
        {
            len = 0;
        }    
    }
    return max_len;
}

python3
class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        length = 0
        max_len = 0
        for i in range(len(nums)):
            tmp = nums[i]
            if tmp == 1:
                length += 1
            else:
                length = 0
            if max_len < length:
                    max_len = length
        return max_len
