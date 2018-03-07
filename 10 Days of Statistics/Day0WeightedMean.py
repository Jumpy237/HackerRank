size = int(input())
lis_val = [int(x) for x in input().split()]
lis_weight = [int(x) for x in input().split()]


sum_wv = 0
sum_w = 0
for i in range(0,size):

    sum_wv += lis_val[i] * lis_weight[i]
    sum_w += lis_weight[i]


print(format(sum_wv/sum_w, ".1f"))
