/*
 * Problem : https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
*/


class Solution {
private:
    bool isEvenLength(int n) {
        int cnt = 0;
        while (n) {
            cnt++;
            n /= 10;
        }    
        return cnt % 2 == 0 ? true : false;
    }
    
public:
    // T(n) : O(n * ln(max(nums))), S(n) : O(1)
    int findNumbers(const vector<int>& nums) {
        
        int cnt = 0;
        for (int num : nums) {
            if (isEvenLength(num)) cnt++;
        }
        
        return cnt;
    }
};