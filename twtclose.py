# ans = list()
n,k = [int(x) for x in input().split()]
dic = [0]*n
for x in range(0,k):
    t = input().split()
    if t[0] == 'CLOSEALL':
        dic = [0]*n
    else:
        dic[int(t[1])-1] = (dic[int(t[1])-1]+1)%2
    print(sum(dic))
# for x in ans:
#     print(x)