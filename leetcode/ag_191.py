class Solution(object):
    def hammingWeight(self, n):
        """
        :type n: int
        :rtype: int
        """
        cnt = 0
        while n:
            if n&1 :
                cnt+=1
            n = n>>1
        return cnt

if __name__ == '__main__':
    ns = Solution()
    print ns.hammingWeight(7)
