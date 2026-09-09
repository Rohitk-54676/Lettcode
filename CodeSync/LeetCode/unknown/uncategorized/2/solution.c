/*
 * Platform: LeetCode
 * Problem: 2
 * URL: https://leetcode.com/submissions/detail/2129184903/
 * Language: C
 * Difficulty: Unknown
 * Topics: Uncategorized
 * Runtime: 0 ms
 * Memory: 165.76 MB
 * Synced: 2026-09-09T11:18:38.631Z
 */

1class Solution {
2public:
3    bool uniformArray(vector<int>& nums1) {
4        int mo = INT_MAX;
5        for(int i:nums1){
6            if(i%2==1){
7                mo=min(mo,i);
8            }
9        }
10        if(mo==INT_MAX){
11            return true;
12        }
13        for(int i:nums1){
14            if(i%2==0 && i<mo){
15                return false;
16            }
17        }
18        return true;
19    }
20};
