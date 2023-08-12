class Solution {
private:
    int search(vector<int>& nums, int target, int left, int right) {
        if (left > right || right < left) {
            return left;
        }

        // floor
        int i = (left + right) /2;
        
        if (nums[i] == target) {
            return i;
        } else if (nums[i] > target) {
            // not inclusive of i
            return search(nums, target, left, i-1);
        } else {
            // not inclusive of i
            return search(nums, target, i+1, right);
        }
    }
public:
    int searchInsert(vector<int>& nums, int target) {
        return search(nums, target, 0, nums.size()-1);
    }
};