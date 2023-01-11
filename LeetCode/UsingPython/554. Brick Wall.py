class Solution:
    def leastBricks(self, A: List[List[int]]) -> int:
        x = sum(A[0])
        arr = {}
        mx=0
        for i in range(len(A)):
            for j in range(len(A[i])-1):
                if j!=0:
                    A[i][j]+=A[i][j-1]
                if A[i][j]-1 not in arr:
                    arr[A[i][j]-1]=0
                arr[A[i][j]-1]+=1
                mx = max(mx,arr[A[i][j]-1])
        return len(A)-mx
        
        