// LeetCode - 118. Pascal's Triangle
// Link - https://leetcode.com/problems/pascals-triangle/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ls;
        
        for(int row = 1; row <= numRows; ++row){
            int c = 1;
            vector<int> l;
            
            for(int col = 1; col <= row; ++col){
                l.push_back(c);
                c = c*(row-col)/col;
            }
            
        ls.push_back(l);
        }
        return ls;
    } 
};
