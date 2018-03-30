import math
def normaldf(x, m, sd):
    sqrt_two_pi = math.sqrt(2*math.pi)
    return (math.exp(-(x-m)**2/2/sd**2) / (sqrt_two_pi * sd))

def normalcdf(x,m,sd):
    return (1 + math.erf((x-m) / math.sqrt(2) / sd)) / 2

def convertZtoX(Z,mu,sd, n = 1):
    return Z*(sd/math.sqrt(n)) + mu
x = 6568
mu = 500
sd = 80

//use look up table
print(convertZtoX(-1.96, mu, sd, 100))
print(convertZtoX(1.96, mu, sd, 100))

#print(format(normalcdf(x, mu * 10, sd * math.sqrt(100)),".4f"))




