n, k = map(int, input().split())

ans = 0

for i in range(1, n + 1):
    for j in range(1, n + 1):
        r = k - (i + j)
        if 1 <= r <= n:
            ans += 1

print(ans)
