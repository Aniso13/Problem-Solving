class Solution:
    def bestTeamScore(self, scores: List[int], ages: List[int]) -> int:
        arr = sorted((age, score) for age, score in zip(ages, scores))
        n = len(arr)
        ans = 0
        dp = [0] * n
        # init 
        for i in range(n):
            dp[i] = arr[i][1]
            ans = max(ans, dp[i])
        # check every age smaller than i if it can be added
        for i in range(n):
            for j in range(i - 1, -1, -1):
                if arr[i][1] >= arr[j][1]:
                    dp[i] = max(dp[i], arr[i][1] + dp[j])
            ans = max(ans, dp[i])
        return ans