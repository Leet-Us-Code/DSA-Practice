class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LASKHMI NARAYANA, BHADRE NARAYANA
    int dirx[4] = {0, 1, 0, -1};
    int diry[4] = {1, 0, -1, 0};
    bool isValid(int r, int c, vector<vector<int>> visited, int m, int n, vector<vector<char>> grid)
    {
        if(r < 0 || c < 0 || r >= m || c >= n || visited[r][c] || grid[r][c] == '0')
            return false;
        return true;
    }
    void travel(int r, int c, vector<vector<int>> &visited, vector<vector<char>> grid, int m, int n)
    {
        queue<pair<int, int> > q;
        q.push(make_pair(r, c));
        visited[r][c] = true;
        while(!q.empty())
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for(int i = 0; i < 4; i++)
            {
                int nx = x + dirx[i];
                int ny = y + diry[i];
                if(isValid(nx, ny, visited, m, n, grid))
                {
                    visited[nx][ny] = true;
                    q.push(make_pair(nx, ny));
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> visited(m, vector<int>(n, false));
        int islands = 0;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(grid[i][j] == '1' && !visited[i][j])
                {
                    travel(i, j, visited, grid, m, n);
                    islands++;
                }
            }
        }
        return islands;
    }
};
