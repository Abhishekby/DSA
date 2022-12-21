import sys
def solve(s):
        mx=-sys.maxsize-1
        for i in range (1,len(s)):
            a=s[0:i]
            print(a)
            b=s[i:]
            print(b)
            l=int(a,2)
            m=int(b,2)
            mx=max(mx,(l+m))
        return mx
solve("001001110111")      