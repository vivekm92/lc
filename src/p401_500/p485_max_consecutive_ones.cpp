/*
 * Problem : https://leetcode.com/problems/max-consecutive-ones/
*/

class Solution {
public:
	// T(n) : O(n), S(n) : O(1)
    int findMaxConsecutiveOnes(const vector<int>& nums) {
        
        int curr_cnt = 0, max_cnt = 0;
        for (int val : nums) {
            curr_cnt = val == 1 ? curr_cnt + 1 : 0;            
            max_cnt = max(max_cnt, curr_cnt);
        }
        
        return max_cnt;
    }
};