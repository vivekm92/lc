
class Solution {
public:

	// T(n) : O(nlogn + n), S(n) : O(1)
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        sort(boxTypes.begin(), boxTypes.end(), [&](const auto &A, const auto &B){
            return A[1] > B[1];  
        });
              
        int res = 0;
        for (auto &box : boxTypes) {
            if (truckSize == 0) break;
            int n = min(truckSize, box[0]);
            res += n * box[1];
            truckSize -= n;
        }
        
        return res;
    }
};