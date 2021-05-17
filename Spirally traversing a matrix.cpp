vector<int> spirallyTraverse(vector<vector<int> > mat, int r, int c) 
    {
        int rs = 0;
        int re = mat.size()-1;
        int cs = 0;
        int ce = mat[0].size()-1;
        vector<int> res;
        while(re>=rs && ce>=cs)
        {
            for(int i=cs; i<=ce; ++i)
            {
                res.push_back(mat[rs][i]);
            }
            ++rs;
            for(int i=rs; i<=re; ++i)
            {
                res.push_back(mat[i][ce]);
            }
            --ce;
            if(re>=rs)
            {
                for(int i=ce; i>=cs; --i)
                {
                    res.push_back(mat[re][i]);
                }
                --re;
            }
            if(ce >= cs)
            {
                for(int i=re; i>=rs; --i)
                {
                    res.push_back(mat[i][cs]);
                }
                ++cs;
            }
        }
        return res;
    }
