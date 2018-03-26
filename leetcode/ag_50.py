class Solution(object):
    def myPow(self, x, n):
        """
        :type x: float
        :type n: int
        :rtype: float
        """
        ans = 1
        exp = abs(n)
        while exp > 0:
            if (exp&1 == 1):
                ans *= x
            exp >>=1
            x*=x
        if n > 0:
            return ans
        else:
            return 1/ans
        
def run():
    s = Solution()
    ans = s.myPow(2.2, 3)
    print ans
    pass
