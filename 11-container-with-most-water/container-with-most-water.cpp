class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0, r = height.size() - 1, maxa = 0;
        while(l<r){
            int h = min(height[l], height[r]);
            int w = r-l;
            maxa = max(maxa, h * w);
            height[l]<height[r] ? l++ : r-- ; 
        }
        return maxa;
    }
};