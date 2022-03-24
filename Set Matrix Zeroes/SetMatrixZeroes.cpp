class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int i, j;
        set<int> row;
        set<int> col;
        
        for (i = 0; i < matrix.size(); ++i){
            for(j = 0; j <matrix[i].size(); ++j){
                if (matrix[i][j] == 0){
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        
        
        for (i = 0; i < matrix.size(); ++i){
            for(j = 0; j <matrix[i].size(); ++j){
                for (auto r: row){
                    matrix[r][j] = 0;
                }
                for (auto c: col){
                    matrix[i][c] = 0;
                }
            }
        }
        
    }
};
