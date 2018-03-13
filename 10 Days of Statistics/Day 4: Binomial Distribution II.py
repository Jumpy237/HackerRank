import math


def combination(n,r):
    return math.factorial(n) / (math.factorial(r) * math.factorial(n-r))

def pdf(p,x,n):
    return combination(n,x)*math.pow(p,x)*math.pow(1-p,n-x)

def cdf(p,x,n):
    cdf = 0
    for i in range(0,x+1):
        cdf += pdf(p,i,n)
    return cdf

ans1 = cdf(0.12,2,10)
ans2 = 1 - cdf(0.12,1,10)
print(format(ans1,".3f"))
print(format(ans2,".3f"))



