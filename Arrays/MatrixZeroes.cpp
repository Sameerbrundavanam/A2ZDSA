//Leetcode 73

//BruteForce
class Solution {
public:
    void markRow(int i,vector<vector<int>>& matrix,int m){
        for(int j=0;j<m;j++){
            if(matrix[i][j] != 0) matrix[i][j] = -1;
        }
    }
    void markCol(int j,vector<vector<int>>& matrix,int n){
        for(int i=0;i<n;i++){
            if(matrix[i][j] != 0) matrix[i][j] = -1;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            int n = matrix.size();
            int m = matrix[i].size();
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j] == 0){
                    markRow(i,matrix,m);
                    markCol(j,matrix,n);
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                    if(matrix[i][j] == -1) matrix[i][j] = 0;
            }
        }
    }
};

//Better Solution
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>rm(matrix.size(),0),cm(matrix[0].size(),0);
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j] == 0){
                    rm[i] = 1; cm[j] = 1;
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(rm[i] or cm[j]){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

//Optimal
// o(1) space
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // vector<int>rm(matrix.size(),0); -> matrix[0][...]
        // vector<int>cm(matrix[0].size(),0); -> matrix[...][0]
        int col0 = 1;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j] == 0){
                   matrix[i][0] = 0;
                   if(j != 0) matrix[0][j] = 0;
                   else col0 = 0;
                }
            }
        }
        for(int i=1;i<matrix.size();i++){
            for(int j=1;j<matrix[i].size();j++){
                if(matrix[i][0] == 0 or matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
        if(matrix[0][0] == 0){
            for(int j=0;j<matrix[0].size();j++) matrix[0][j] =0;
        }
        if(col0 == 0){
            for(int i=0;i<matrix.size();i++) matrix[i][0] = 0;
        }
    }
};