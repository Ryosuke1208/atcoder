n, x = map(int, input().split())
a = list(map(int, input().split()))

ans = False

for i in range(n):
    if a[i] == x:
        ans = True

print("Yes") if ans else print("No")
