class Solution {
public:
    int maxArea(vector<int>& heights) {
       // sort(heights.begin(),heights.end());
        int l = 0;
        int r = heights.size()-1;
        int maxi =0;
        while(l<r){
            int h = min(heights[l],heights[r]);
            int width = r-l;
            int area = h*width;
            maxi = max(maxi,area);
            if(heights[l]<heights[r]){
                l++;
            }
            else{
                r--;
            }

        }
        return maxi;
    }
};
