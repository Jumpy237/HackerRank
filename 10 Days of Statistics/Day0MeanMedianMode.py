"""
10
64630 11735 14216 99233 14470 4978 73429 38120 51135 67060
"""
import math

size = int(input())
data = [int(n) for n in input().split()]

cnt = {}
sum = 0

for k in data:
    sum += k
    if k not in cnt:
        cnt[k] = 1
    else:
        cnt[k] += 1



i = (size-1) / 2
#print(i)
print(sum / float(size))

if i % 1 == 0:
    print(data[int(i)])
else:
    #print(data[math.floor(i)] , data[math.floor(i)+1])
    print((data[math.floor(i)] + data[math.floor(i)+1]) / 2)

highest_v = -1
current_k = -1
for k,v in cnt.items():

    if v > highest_v:
        highest_v = v
        current_k = k
    elif v == highest_v and k < current_k:
        current_k = k


print(current_k)