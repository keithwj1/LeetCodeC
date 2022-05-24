#include <cmath>
class Solution {
public:
    int quick_max(int a, int b){
        return (a<b)?b:a;
    }
    int quick_min(int a, int b){
        return (a>b)?b:a;
    }
    int calculate_area(int xa, int xb, int ya, int yb){
        return abs(xb-xa)*quick_min(yb,ya);
    }
    int maxArea(vector<int>& height) {
        int largest_area = 0;
        int left = 0;
        int right = height.size() - 1;
        while (left < right){
            int width = right - left;
            largest_area = max(largest_area, min(height[left], height[right]) * width);      
            if (height[left] < height [right]){
                left++;
            }
            else{
                right--;
            }
        }
        
        return largest_area;
    }
};
