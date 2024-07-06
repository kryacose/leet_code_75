class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0; 
        int j=height.size()-1;
        int mx = 0;
        while(i!=j) {
            if(height[i]<height[j]) {
                mx = max(mx, (j-i)*height[i]);
                i++;
            }
            else {
                mx = max(mx, (j-i)*height[j]);
                j--;
            }
        }
        return mx;

    }
};