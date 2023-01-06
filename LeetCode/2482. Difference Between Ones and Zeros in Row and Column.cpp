class Solution:
    def onesMinusZeros(self, grid: List[List[int]]) -> List[List[int]]:
        
        m, n = len(grid), len(grid[0])
        
        zero_rows = [0 for _ in range(m)]
        zero_cols = [0 for _ in range(n)]
        one_rows = [0 for _ in range(m)]
        one_cols = [0 for _ in range(n)]
        
        for i in range(m):
            for j in range(n):
                if grid[i][j] == 1:
                    one_rows[i] += 1
                    one_cols[j] += 1
                else:
                    zero_rows[i] += 1
                    zero_cols[j] += 1
                    
        for i in range(m):
            for j in range(n):
                grid[i][j] = one_rows[i] + one_cols[j] - zero_rows[i] - zero_cols[j]
        
        return grid