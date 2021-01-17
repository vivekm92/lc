/*
 * Problem : https://leetcode.com/problems/remove-element/
*/

class Solution {
public:
    
    // Follow Up : order is maintained for nums[i] != val
    // T(n) : O(n), S(n) : O(1)
    int solve1(vector<int>& nums, int val) {
        
        int j = -1, n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] != val) {
                nums[++j] = nums[i];
            }
        }
        
        return j + 1;
    }
    
    // T(n) : O(n), S(n) : O(1)
    int solve2(vector<int>& nums, int val) {
        
        int n = nums.size();
        int i = 0, j = n - 1;
        while (i <= j) {
            if (nums[j] == val) {
                j--;
            }
            else if (nums[i] == val) {
                swap(nums[i++], nums[j--]);
            }
            else {
                i++;
            }
        }
        
        return i;
    }
    
    int removeElement(vector<int>& nums, int val) {
        return solve2(nums, val);
    }
};