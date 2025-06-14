# Leetcode-1239.-Maximum-Length-of-a-Concatenated-String-with-Unique-Characters
# 🚀 Maximum Length of a Concatenated String with Unique Characters

This project provides a **recursive backtracking** solution to the LeetCode problem:

> **Given an array of strings `arr`, return the maximum length of a concatenated string with unique characters.**

---

## ✨ Problem Example

```cpp
Input: arr = ["un","iq","ue"]
Output: 4
Explanation: All possible concatenations are:
- "" (empty string)
- "un"
- "iq"
- "ue"
- "uniq"
- "ique"
- "unique"
Valid combinations with all unique characters:
- "un" + "iq" = "uniq"
- "iq" + "ue" = "ique"
Maximum length = 4
```

---

## 💡 Approach: Recursive Backtracking

We explore all possible combinations of strings using recursion and:

* Maintain a temporary string `temp` that stores the current concatenated string.
* At each step, we decide to **either include** or **exclude** the current string.
* Use a `unique()` function to check if appending the current string would keep all characters unique.

### 🔍 unique() Function

Checks if all characters in the combination of `temp` and `arr[i]` are unique using an unordered set.

### 🔄 find() Function

* Base case: when all strings are considered, return length of current combination.
* Recursive calls:

  * **Include** current string if it maintains uniqueness.
  * **Exclude** current string.
* Return maximum of both options.

---

## 🧠 Time and Space Complexity

### Time Complexity: `O(2^N * L)`

* `2^N` for all subsets.
* `L` is average string length, for uniqueness check.

### Space Complexity: `O(N + L)`

* Due to recursion stack and temporary string + set.

---

## 👨‍💻 Author

**Ridham Garg**
B.Tech Computer Engineering, Thapar University

---

## 📌 Key Points

* ✅ Backtracking to explore all subsets
* ✅ Prunes invalid paths using character uniqueness
* ✅ Handles edge cases (empty strings, duplicates)

---

If you're looking to improve further:

* You can implement **bitmasking** or **dynamic programming with memoization** for performance!

Happy coding! 😄
