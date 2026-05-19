class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> sorted (n + m);
        int i = 0;
        int j = 0;
        int k = 0;
        while (j < m && k < n)
        {
            if (nums1[j] <= nums2[k])
            {
                sorted[i] = nums1[j];
                j++;
            }
            else
            {
                sorted[i] = nums2[k];
                k++;
            }
            i++;
        }
        while (j < m)
        {
            sorted[i] = nums1[j];
            j++;
            i++;
        }
        while (k < n)
        {
            sorted[i] = nums2[k];
            k++;
            i++;
        }
        for (i = 0; i < (m + n); i++)
        {
            nums1[i] = sorted[i];
        }

    }
};