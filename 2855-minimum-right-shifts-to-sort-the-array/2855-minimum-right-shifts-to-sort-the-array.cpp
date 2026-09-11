class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int pivot = -1;

        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                count++;
                pivot = i;
            }
        }

        // Already sorted
        if (count == 0)
            return 0;

        // More than one break -> impossible
        if (count > 1)
            return -1;

        // Check circular connection
        if (nums[n - 1] > nums[0])
            return -1;

        return n - pivot - 1;
    }
};