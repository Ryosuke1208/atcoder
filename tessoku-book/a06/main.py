n, q = map(int, input().split())
a = list(map(int, input().split()))
l = [None] * q
r = [None] * q

for i in range(q):
    l[i], r[i] = map(int, input().split())

s = [None] * (n + 1)

s[0] = 0

for i in range(n):
    s[i + 1] = s[i] + a[i]

for i in range(q):
    print(s[r[i]] - s[l[i] - 1])
