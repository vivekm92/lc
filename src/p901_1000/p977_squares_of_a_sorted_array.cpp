/*
 * Problem : https://leetcode.com/problems/squares-of-a-sorted-array/
*/

class Solution {
public:
    // T(n) : O(n), S(n) : O(1)     
    vector<int> sortedSquares(const vector<int>& nums) {
        
        int n = nums.size();
        vector<int> squares(n);
        int i = 0, j = n - 1, k = 0;
        while (i <= j) {
            if (nums[i] * nums[i] > nums[j] * nums[j]) {
                squares[k++] = nums[i] * nums[i];
                i++;
            } else {
                squares[k++] = nums[j] * nums[j];
                j--;
            }
        }
        
        reverse(squares.begin(), squares.end());
        return squares;
    }
};