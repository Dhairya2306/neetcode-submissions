class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea = 0;
        int left = 0;
        int right = height.size()-1;

        while(right>left)
        {
            int width = right-left;
            int hei = min(height[right],height[left]);

            int currentarea = hei * width;
            maxarea = max(maxarea,currentarea);
            if(height[left]<height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        
        return maxarea;
    }
};
