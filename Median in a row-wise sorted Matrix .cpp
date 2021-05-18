// https://practice.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1#
// time complexity - O(r*c + log(r*c)(r*c) )
// space - O(r*c)
int median(vector<vector<int>> &Mat, int r, int c)
    {
        //int r = Mat.size();
        //int c = Mat[0].size();
        vector<int> tmp(r*c);
        int k = 0;
        for(int i=0; i<r; ++i)
        {
            for(int j=0; j<c; ++j)
            {
                tmp[k++] = Mat[i][j];
            }
        }
        sort(tmp.begin(),tmp.end());
        k = 0;
        for(int i=0; i<r; ++i)
        {
            for(int j=0; j<c; ++j)
            {
                 Mat[i][j] = tmp[k++];
            }
        }
        int i = ((r*c-1)/2)/c; // gives the middle row no.
        int j = ((r*c-1)/2)%c; // gives the middle col no.
        return Mat[i][j];
    }

