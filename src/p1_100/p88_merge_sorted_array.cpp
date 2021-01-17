/*
 * Problem : https://leetcode.com/problems/merge-sorted-array/
*/

class Solution {
public:
    // T(n) : O(n), S(n) : O(1)
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int p1 = m - 1, p2 = n - 1, idx = n + m - 1;
        while (idx >= 0 && p2 >= 0) {
            if (p1 >= 0 && nums1[p1] >= nums2[p2]) {
                nums1[idx--] = nums1[p1--];
            }
            else {
                nums1[idx--] = nums2[p2--];
            }
        }
        
        return ;
    }
};
