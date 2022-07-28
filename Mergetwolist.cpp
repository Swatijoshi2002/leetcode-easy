class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        /*
        The algorithm: 
		iterate back to front and collect values, then either fill with numbers from nums2
        or stop (as nums1 is already sorted)
        */
        m--; n--; // adjusting m and n to act as indices
        for (int i = nums1.size() - 1; i >= 0; i--) {
            
            // inserted all values from nums2, therefore stop
            if (n == -1) break;
            
            // there are still values in nums2 which weren't inserted:
            if (m == -1) { // moved all values which previously existed in nums1
                nums1[i] = nums2[n];
                n--;
                continue;
            }
            
            // both arrays still have some initial values
            if (nums1[m] >= nums2[n]) {
                nums1[i] = nums1[m];
                m--;
                continue;
            }
            else {
                nums1[i] = nums2[n];
                n--;
                continue;
            }
        }
    }
};
