class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freq;

        // Count frequency
        for (int x : nums)
            freq[x]++;

        // frequency -> values
        unordered_map<int, vector<int>> bucket;

        for (auto &[num, f] : freq)
            bucket[f].push_back(num);

        vector<int> ans;

        // Maximum frequency <= nums.size()
        for (int f = 1; f <= nums.size(); f++) {
            if (!bucket.count(f)) continue;

            // Larger value first
            sort(bucket[f].begin(), bucket[f].end(), greater<int>());

            for (int num : bucket[f]) {
                for (int i = 0; i < f; i++)
                    ans.push_back(num);
            }
        }

        return ans;
    }
};