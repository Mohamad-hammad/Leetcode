class Solution {
public:
    int getRowIndex(vector<vector<int>>& matrix, int target)
    {
        int start = 0;
        int end = matrix.size()-1;
        int mid = (start+end)/2;
        while(start<=end)
        {
            mid = (start+end) / 2;
            if(target>matrix[mid][matrix[mid].size()-1])
            {
                start = mid + 1;
            }
            else if(target<matrix[mid][0])
            {
                end = mid-1;
            }
            else
            {
                break;
            }
        }
        if(!(start<=end))
            return -1;
        else
            return mid;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = getRowIndex(matrix,target);
        if(row == -1)
            return false;
        int i = row;
        for(int j = 0; j<matrix[i].size();j++)
        {
            int start = 0;
            int end = matrix[i].size()-1;
            int mid = (start+end)/2;
            while(start<=end)
            {
                mid = start + (end - start) / 2;
                if(target==matrix[i][mid])
                {
                    return true;
                }
                else if(target>matrix[i][mid])
                {
                    start = mid+1;
                }
                else
                {
                    end = mid-1;
                }
            }
            return false;
        }       
        return false;
    }
};


/*

class Solution {
public:
    int getRowIndex(vector<int>& matrix, int target)
    {
        int start = 0;
        int end = matrix.size()-1;
        int mid = (start+end)/2;
        while(start!=end)
        {
            if(target==matrix[mid])
            {
                return mid;
            }
            else if(target>matrix[mid])
            {
                start = mid+1;
            }
            else
            {
                end = mid-1;
            }
        }
        return -1;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size()-1;i++)
        {
            if(target>=matrix[i][0] && target<matrix[i+1][0])
            {
                for(int j = 0; j<matrix[i].size();j++)
                {
                    int start = 0;
                    int end = matrix[i].size()-1;
                    int mid = (start+end)/2;
                    while(start!=end)
                    {
                        if(target==matrix[i][mid])
                        {
                            return true;
                        }
                        else if(target>matrix[i][mid])
                        {
                            start = mid+1;
                        }
                        else
                        {
                            end = mid-1;
                        }
                    }
                    return false;
                }
            }
            
        }
        return false;
    }
};
*/