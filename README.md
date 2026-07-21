# Moglix Shortlisting Round - Longest Valid Parentheses solution in C++

## Language
C++

## Problem Statement
Given a string containing just the characters '(' and ')', return the length of the longest valid (well‑formed) parentheses substring.

### Examples
- Input: "(()" → Output: 2  
- Input: ")()())" → Output: 4  
- Input: "" → Output: 0  

## Constraints
- `0 <= s.length <= 3 × 10^4` (i.e. up to 30,000 characters)  
- `s[i]` is either `'('` or `')'`

> **Note:**  
> The assignment document shows the constraint as:
> ```
> 0 <= s.length <= 3 * 104
> ```
> This appears to be a formatting issue. It is interpreted as:
> ```
> 0 <= s.length <= 3 × 10^4
> ```
> which means the maximum string length is **30,000** characters.

---

## Approach
This solution uses a **stack** to store the indices of opening parentheses.  
- When encountering `'('`, push its index onto the stack.  
- When encountering `')'`, pop from the stack.  
  - If the stack becomes empty, push the current index as a new base.  
  - Otherwise, calculate the length of the current valid substring as `i - stack.top()`.  
- Keep track of the maximum length found during traversal.

### Complexity
- **Time Complexity:** O(n)  
- **Space Complexity:** O(n)  

---
## Test Cases

```cpp
Input: "(()"
Output: 2
Explanation: The longest valid substring is "()".

Input: ")()())"
Output: 4
Explanation: The longest valid substring is "()()".

Input: ""
Output: 0
Explanation: Empty string has no valid parentheses.

Input: "((((("
Output: 0
Explanation: No closing brackets, so no valid substring.

Input: "(()(()))"
Output: 8
Explanation: Entire string is valid.

Input: "()(()))))"
Output: 6
Explanation: Longest valid substring is "()(()))".
```

## How to Run
1. Clone the repository:
  ```bash
git clone https://github.com/samitsankhla/moglix-longest-valid-parentheses.git
```
