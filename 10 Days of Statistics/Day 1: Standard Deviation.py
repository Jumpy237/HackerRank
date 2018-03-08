import math

def mean(data):
    size = len(data)
    sum = 0
    for v in data:
        sum += v
    return sum/size

size = int(input())
data = [int(n) for n in input().split()]

mean = mean(data)
sum = 0
for v in data:
    sum += math.pow(v - mean,2)

SD = math.sqrt(sum/size)

print(format(SD,".1f"))
