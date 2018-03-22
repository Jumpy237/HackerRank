import math


def combination(n,r):
    return math.factorial(n) / (math.factorial(r) * math.factorial(n-r))

def binomialpdf(p,x,n):
    return combination(n,x)*math.pow(p,x)*math.pow(1-p,n-x)

def binomialcdf(p,x,n):
    cdf = 0
    for i in range(0,x+1):
        cdf += binomialpdf(p,i,n)
    return cdf

def poissondf(x,m):
    return ((m ** x) * math.exp(-m)) / math.factorial(x)


print(format(poissondf(5,2.5),".3f"))



