b = int(input())
ans = -1
for i in range(1, 16):
    a = 1
    for _ in range(i):
        a *= i
    if a == b:
        ans = i
        break
print(ans)
