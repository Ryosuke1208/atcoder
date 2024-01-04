def f(x):
    return x * x * x + x


n = int(input())

l = 0.0
r = 100.0
for i in range(20):
    m = (l + r) / 2
    val = f(m)
    if val > n:
        r = m
    else:
        l = m
print(m)
