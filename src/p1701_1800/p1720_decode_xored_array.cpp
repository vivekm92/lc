
class Solution {
public:
    
    // T(n) : O(n), S(n) : O(1)
    vector<int> decode(vector<int>& encoded, int first) {
        
        int n = encoded.size();
        vector<int> res(n + 1);
        res[0] = first;
        for (int i = 1; i <= n; i++) {
            res[i] = res[i - 1] ^ encoded[i - 1];
        }
    
        return res;        
    }
};