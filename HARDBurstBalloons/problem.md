# Burst Balloons (LeetCode 312)
**Difficulty:** Hard  
**Topics:** Dynamic Programming

You are given `nums`, an array of integers representing balloons. You are asked to burst all the balloons.

If you burst the `i`-th balloon, you get `nums[i - 1] * nums[i] * nums[i + 1]` coins.  
If `i - 1` or `i + 1` goes out of bounds, treat that position as a balloon with value `1`.

Return the maximum coins you can collect by bursting the balloons wisely.

### Example 1
Input: `nums = [3,1,5,8]`  
Output: `167`  

Explanation:  
`[3,1,5,8] -> [3,5,8] -> [3,8] -> [8] -> []`  
Coins = `3*1*5 + 3*5*8 + 1*3*8 + 1*8*1 = 167`

### Example 2
Input: `nums = [1,5]`  
Output: `10`

### Constraints
- `n == nums.length`
- `1 <= n <= 300`
- `0 <= nums[i] <= 100`


