class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        if (n <= 1 || k == 0 || k == n) {
            return;
        }

        int offset = __gcd(n, k);
        int t, dest;

        while (offset) {
            int curr = offset;
            int temp = nums[curr];
            do {
                dest = (curr + k) % n;
    
                t = nums[dest];
                nums[dest] = temp;
    
                temp = t;
                curr = dest;
            } while (curr != offset);
            offset--;
        }
    }
};