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

def normaldf(x, m, sd):
    sqrt_two_pi = math.sqrt(2*math.pi)
    return (math.exp(-(x-m)**2/2/sd**2) / (sqrt_two_pi * sd))

def normalcdf(x,m,sd):
    return (1 + math.erf((x-m) / math.sqrt(2) / sd)) / 2

mu = 70
sd = 10
print(format((1 - normalcdf(80,mu,sd)) * 100,".2f"))
print(format((1 - normalcdf(60,mu,sd)) * 100,".2f"))
print(format((normalcdf(60,mu,sd) * 100), ".2f"))



