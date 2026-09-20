# Reverse Degree of a String

- Platform: LeetCode
- Language: Daily Question
- Difficulty: Easy
- Topics: String, Simulation
- Runtime: 0 ms
- Memory: 9.76 MB
- Problem URL: https://leetcode.com/problems/reverse-degree-of-a-string/submissions/2147375806/?envType=daily-question&envId=2026-09-20
- Synced: 2026-09-20T06:07:48.589Z

## Problem Description

Given a string s, calculate its reverse degree. The reverse degree is calculated as follows: For each character, multiply its position in the reversed alphabet ('a' = 26, 'b' = 25, ..., 'z' = 1) with its position in the string (1-indexed). Sum these products for all characters in the string. Return the reverse degree of s. Example 1: Input: s = "abc" Output: 148 Explanation: LetterIndex in Reversed AlphabetIndex in StringProduct'a'26126'b'25250'c'24372 The reversed degree is 26 + 50 + 72 = 148. Example 2: Input: s = "zaza" Output: 160 Explanation: LetterIndex in Reversed AlphabetIndex in StringProduct'z'111'a'26252'z'133'a'264104 The reverse degree is 1 + 52 + 3 + 104 = 160. Constraints: 1 <= s.length <= 1000 s contains only lowercase English letters.

## Explanation

This solution was accepted on LeetCode using Daily Question. The detected topics are String, Simulation. Review the synced source file for the implementation details.
