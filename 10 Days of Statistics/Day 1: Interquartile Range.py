import math

def quartile(data):
    ans_list = split(data)
    #print(split(ans_list[1])[0])
    #print(ans_list[0])
    #print(split(ans_list[2])[0])
    return [split(ans_list[1])[0],ans_list[0],split(ans_list[2])[0]]

def split(data):
    data = sorted(data)
    mid = (len(data)-1)/2
    list_l = []
    list_r = []
    median = -1
    if mid % 1 == 0:
        median = data[int(mid)]
        list_l = data[:int(mid)]
        list_r = data[int(mid)+1:]
    else:
        median = (data[int(mid)]+data[int(mid)+1])/2
        list_l = data[:int(mid)+1]
        list_r = data[int(mid):]

    ans_list = [median,list_l,list_r]
    return ans_list

size = int(input())
value = [int(n) for n in input().split()]
freq = [int(n) for n in input().split()]

data = []

for i in range(0,size):
    data.extend([value[i]]*freq[i])

Q = quartile(data)
print(format(Q[2] - Q[0], ".1f"))
