import math
def normaldf(x, m, sd):
    sqrt_two_pi = math.sqrt(2*math.pi)
    return (math.exp(-(x-m)**2/2/sd**2) / (sqrt_two_pi * sd))

def normalcdf(x,m,sd):
    return (1 + math.erf((x-m) / math.sqrt(2) / sd)) / 2

print(format(normalcdf(250/100, 2.4, 2.0 / math.sqrt(100)),".4f"))




