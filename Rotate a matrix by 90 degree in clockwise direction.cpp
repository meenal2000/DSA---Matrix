// We can also do by seeing the pattern and printing it
//  This way :-
for (int i = 0; i < N / 2; i++) {
        for (int j = i; j < N - i - 1; j++) {
 
            // Swap elements of each cycle
            // in clockwise direction
            int temp = a[i][j];
            a[i][j] = a[N - 1 - j][i];
            a[N - 1 - j][i] = a[N - 1 - i][N - 1 - j];
            a[N - 1 - i][N - 1 - j] = a[j][N - 1 - i];
            a[j][N - 1 - i] = temp;
        }
    }
// Or u can also rotate around secondary diagnol and middle row;
void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0;i<n;++i)
        {
            for(int j=0; j<i; ++j)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        int m = n/2;
        for(int i=0; i<n; ++i)
        {
            for(int j=0; j<m; ++j)
            {
                swap(matrix[i][j],matrix[i][n-1-j]);
            }

        }
    
    }
