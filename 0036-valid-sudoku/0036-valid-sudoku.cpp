class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //check each row
        //int(ch - '0')
        for(int i=0;i<9;i++)
        {
            vector <bool> myvec (10,false);
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    if(myvec[int(board[i][j])-48]==true)
                        return false;
                    else
                        myvec[int(board[i][j])-48]=true;
                }
                
            }
        }
        
        //check each col
        for(int i=0;i<9;i++)
        {
            vector <bool> myvec (10,false);
            for(int j=0;j<9;j++)
            {
                if(board[j][i]!='.')
                {
                    if(myvec[int(board[j][i])-48]==true)
                        return false;
                    else
                        myvec[int(board[j][i])-48]=true;
                }
            }
        }
        
        //check each 3x3
        for(int i=0;i<9;i+=3)
        {
            vector <bool> myvec (9,false);
            for(int j=0;j<9;j+=3)
            {
                vector <bool> myvec (10,false);
                for(int k=0;k<3;k++)
                {
                    
                    for(int m=0;m<3;m++)
                    {
                        if(board[i+k][j+m]!='.')
                        {
                            if(myvec[int(board[i+k][j+m])-48]==true)
                                return false;
                            else
                                myvec[int(board[i+k][j+m])-48]=true;
                        }
                            
                    }
                }
            }
        }
        return true;
        
    }
};