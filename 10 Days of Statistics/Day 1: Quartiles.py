import math

def quartile(data):
    ans_list = split(data)
    print(int(split(ans_list[1])[0]))
    print(int(ans_list[0]))
    print(int(split(ans_list[2])[0]))

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
        list_r = data[int(mid)+1:]

    ans_list = [median,list_l,list_r]
    return ans_list

size = int(input())
data = [int(n) for n in input().split()]
quartile(data)
