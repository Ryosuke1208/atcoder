a, b = map(int, input().split())

ans = False
for i in range(a, b + 1):
    if 100 % i == 0:
        ans = True

print("Yes") if ans else print("No")
