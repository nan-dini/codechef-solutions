dic = dict()
ans = list()
def rd(v):
    if v in dic:
        return dic[v]
    elif v < int(v//2) + int(v//3) + int(v//4):
        x = rd(int(v//2))
        y = rd(int(v//3))
        z = rd(int(v//4))
        dic[v] = x+y+z
    else:
        dic[v] = v
    return dic[v]

for _ in range(10):
    try: 
        v = int(input()) 
        ans.append(str(rd(v)))
    except EOFError: break
for x in ans:
    print(x)