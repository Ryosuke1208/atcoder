t = int(input())
n = int(input())

l = [None] * n
r = [None] * n

for i in range(n):
    l[i], r[i] = map(int, input().split())

b = [0] * (t + 1)

for i in range(n):
    b[l[i]] += 1
    b[r[i]] -= 1

ans = [None] * (t + 1)
ans[0] = b[0]

for i in range(1, t + 1):
    ans[i] = ans[i - 1] + b[i]

for i in range(t):
    print(ans[i])
