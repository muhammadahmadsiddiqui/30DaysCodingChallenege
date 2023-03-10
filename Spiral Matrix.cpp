class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> spiral;
        
        int left = 0;
        int right = n - 1; 
        int top = 0;
        int bottom = m - 1; 

        while(left <= right && top <= bottom){ 
            for(int i = left; i <= right; i++){ 
                spiral.push_back(matrix[top][i]); 
            }

            for(int j = top + 1; j <= bottom; j++){ 
                spiral.push_back(matrix[j][right]);
            }

            if (top < bottom){
                for(int i = right - 1; i >= left; i--){ 
                    spiral.push_back(matrix[bottom][i]); 
                }
            }

            if (left < right){
                for(int j = bottom - 1; j > top; j--){ 
                    spiral.push_back(matrix[j][left]); 
                }
            }

            left++;
            right--;
            top++;
            bottom--;

        }
        
        return spiral;
    }
};
