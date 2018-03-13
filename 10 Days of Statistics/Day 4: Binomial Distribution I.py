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

a,b = input().split()
a = float(a)
b = float(b)
c = a+b
ans = cdf(a/c,6,6) - cdf(a/c,2,6)

print(format(ans,".3f"))



