class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0; // Pointer for 0s
        int j = 0; // Current element pointer
        int k = nums.size() - 1; // Pointer for 2s

        while (j <= k) {
            if (nums[j] == 0) {
                swap(nums[i], nums[j]);
                i++;
                j++;
            } else if (nums[j] == 2) {
                swap(nums[j], nums[k]);
                k--;
            } else { // nums[j] == 1
                j++;
            }
        }
    }
};
