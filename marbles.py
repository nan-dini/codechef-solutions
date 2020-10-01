ans = list()
t = int(input())
def nCr(N, R):
    K = min(N-R,R)
    A = 1
    B = 1
    for i in range(N - K + 1, N + 1):
        A *= i
    for i in range(1, K + 1):
        B *= i
    return A // B
for _ in range(0,t):
    n,k = [int(x) for x in input().split()]
    ans.append(nCr(n-1,k-1))
for x in ans:
    print(int(x))

