// O(n*m) , O(1) space . linear search in the matrix

// O(nlogm) , O(1) space
// Just keep traversing each row and do binary search for the element in the column

// O(log2(m*n) - since we are binary searching the whole 1-d array . 
// space - O(1)
bool searchMatrix(vector<vector<int>>& mat, int target) {
        int low = 0;
        int high = ( (mat.size())*(mat[0].size()) ) -1;
        int c = mat[0].size();
        while(low<=high)
        {
            int m =(low+(high-low)/2);
            if(mat[m/c][m%c] == target)
            {
                return true;
            }
            else if(mat[m/c][m%c] > target)
            {
                high = m-1;
            }
            else
            {
                low = m+1;
            }
        }
        return false;
        return false;
    }

// time - O(n+m) . space - O(1)
bool searchMatrix(vector<vector<int>>& mat, int target) {
        int j = mat[0].size()-1;
        int i = 0;
        while(j>=0 && i<mat.size())
        {
            if(mat[i][j] == target)
            {
                return true;
            }
            else if(mat[i][j] < target)
            {
                ++i;
            }
            else
            {
                --j;
            }
        }
        return false;
    }

// This is an alternative approach . Starting from left corner element.
bool searchMatrix(vector<vector<int>>& mat, int target) {
        int j = 0;
        int i = mat.size()-1;
        while(j<mat[0].size() && i>=0)
        {
            if(mat[i][j] == target)
            {
                return true;
            }
            else if(mat[i][j] < target)
            {
                ++j;
            }
            else
            {
                --i;
            }
        }
        return false;
    }
