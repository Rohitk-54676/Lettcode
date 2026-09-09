/*
 * Platform: LeetCode
 * Problem: 2
 * URL: https://leetcode.com/submissions/detail/2131815606/
 * Language: C
 * Difficulty: Unknown
 * Topics: Uncategorized
 * Runtime: 7 ms
 * Memory: 202.56 MB
 * Synced: 2026-09-09T11:20:03.158Z
 */

1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) {
4        int n=nums.size();
5        vector<int> revmin(n);
6        revmin[n-1]=nums[n-1];
7        for(int i=n-2;i>=0;--i){
8            revmin[i]=min(nums[i],revmin[i+1]);
9        }
10        int start=nums[0];
11        for(int i=0;i<n;i++){
12            start=max(start,nums[i]);
13            if(start-revmin[i]<=k){
14                return i;
15            }
16        }
17        return -1;
18    }
19};
