# Coin Change (LeetCode 322)
**Difficulty:** Medium  
**Topics:** Dynamic Programming

You are given an integer array `coins` representing denominations and an integer `amount`.  
Return the fewest number of coins needed to make that amount. If impossible, return `-1`.

You may assume infinite supply of each coin.

### Example 1
Input: coins = [1,2,5], amount = 11  
Output: 3  
Explanation: 11 = 5 + 5 + 1

### Example 2
Input: coins = [2], amount = 3  
Output: -1

### Example 3
Input: coins = [1], amount = 0  
Output: 0

### Constraints
- 1 <= coins.length <= 12  
- 1 <= coins[i] <= 2^31 - 1  
- 0 <= amount <= 10^4


