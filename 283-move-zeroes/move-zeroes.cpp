class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int b = 0;
        for (int a = 0; a < nums.size(); a++) {
            if (nums[a] != 0) {
                if (a != b)
                    swap(nums[a], nums[b]);
                b++;
            }
        }
    }
};