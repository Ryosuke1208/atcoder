n = int(input())
a = list(map(int, input().split()))

ans = False
for i in range(n):
    for j in range(i + 1, n):
        for k in range(j + 1, n):
            if a[i] + a[j] + a[k] == 1000:
                ans = True

print("Yes") if ans else print("No")
