class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> temp;
        temp.push_back(1);
        vector<vector<int>> newvec;
        if(numRows == 0)
            return newvec;
        newvec.push_back(temp);
        if(numRows == 1)
            return newvec;
        temp.clear();
        temp.push_back(1);
        temp.push_back(1);
        newvec.push_back(temp);
        temp.clear();
        
        for(int i=2;i<numRows;i++)
        {
            temp.push_back(1);
            for(int j=1;j<=i-1;j++)
            {
                temp.push_back(newvec[i-1][j-1]+newvec[i-1][j]);
            }
            temp.push_back(1);
            newvec.push_back(temp);
            temp.clear();
        }
        
        
        
        
        return newvec;
        
    }
};