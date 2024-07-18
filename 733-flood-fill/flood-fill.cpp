class Solution {
    private:
    void dfs_helper(vector<vector<int>>& image, int row, int col, int newcolor,int currcolor){
        if(row<0|| row>=image.size()||col<0||col>=image[0].size()||image[row][col]!= currcolor){
            return;
        }
        image[row][col]=newcolor;
        dfs_helper(image, row+1, col, newcolor, currcolor);
          dfs_helper(image, row-1, col, newcolor, currcolor);
          dfs_helper(image, row, col+1, newcolor, currcolor);
          dfs_helper(image, row, col-1, newcolor, currcolor);
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int currcolor=image[sr][sc];
        if(currcolor!=color){
             dfs_helper(image, sr, sc, color, currcolor);
        }
        return image;
    }
};