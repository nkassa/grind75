class Solution {
public:
    int m;
    int n;
    vector<vector<int>> img;
    vector<vector<int>> directions = {{0,1},{1,0},{0,-1},{-1,0}};
    vector<vector<bool>> seen;
    int num;
    int color;
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) 
    {
        this->color = color;
        img = image;
        m = image.size();
        n = image[0].size();
        seen = vector(m, vector<bool>(n, false));
        num = image[sr][sc];
        img[sr][sc] = color;
        seen[sr][sc] = true;
        dfs(sr, sc);
        return img;
    }
    void dfs(int row, int col)
    {
        for(vector<int> direction: directions)
        {
            int nextRow = row + direction[0];
            int nextCol = col + direction[1];
            if(valid(nextRow, nextCol) && !seen[nextRow][nextCol])
            {
                seen[nextRow][nextCol] = true;
                img[nextRow][nextCol] = color;
                dfs(nextRow, nextCol);
            }
        }
    }
    bool valid(int row, int col)
    {
        return row >= 0 && row < m && col >= 0 && col < n && img[row][col] == num;
    }
};