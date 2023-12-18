import math

n, d = map(int, input().split())
x = [[0] * d for _ in range(n)]
for i in range(n):
    row = list(map(int, input().split()))
    x[i] = row

ans = 0
for i in range(n - 1):
    for j in range(i+1, n):
        num = 0
        for k in range(d):
            num += (x[i][k] - x[j][k])**2
        dist = math.sqrt(num)
        if dist.is_integer():
            ans += 1

print(ans)
