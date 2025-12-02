# Word Ladder (LeetCode 127)
**Difficulty:** Hard  
**Topics:** BFS, Graph, Hash Map

A transformation sequence from `beginWord` to `endWord` using a dictionary `wordList` is a sequence:
`beginWord -> s1 -> s2 -> ... -> sk` such that:

- Every adjacent pair of words differs by exactly one letter.  
- Every `si` for `1 <= i <= k` is in `wordList`.  
- `sk == endWord`.  

Given `beginWord`, `endWord`, and `wordList`, return the number of words in the shortest transformation sequence, or `0` if no such sequence exists.

### Example 1
Input: `beginWord = "hit"`, `endWord = "cog"`,  
`wordList = ["hot","dot","dog","lot","log","cog"]`  
Output: `5`  
Explanation: One shortest sequence is `"hit" -> "hot" -> "dot" -> "dog" -> "cog"`.

### Example 2
Input: `beginWord = "hit"`, `endWord = "cog"`,  
`wordList = ["hot","dot","dog","lot","log"]`  
Output: `0`  
Explanation: `"cog"` is not in `wordList`, so no valid sequence.

### Constraints
- `1 <= beginWord.length <= 10`  
- `endWord.length == beginWord.length`  
- `1 <= wordList.length <= 5000`  
- All words consist of lowercase English letters  
- `beginWord != endWord`  
- All words in `wordList` are unique

