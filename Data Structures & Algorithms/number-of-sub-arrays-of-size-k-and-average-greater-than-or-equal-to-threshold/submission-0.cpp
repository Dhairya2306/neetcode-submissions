class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int sum = 0;
        int count = 0;
        for(int i = 0;i<k;i++)
        {
            sum += arr[i];
        }

        int l = 0;
        int r = k-1;
        while(r<n)
        {
            int avg = sum/k;
            if(avg>=threshold)
            {
                count++;
            }
            sum -= arr[l];
            l++;
            r++;
        if(r < n) {
            sum += arr[r];
        }
            
        }
        return count;
    }
};