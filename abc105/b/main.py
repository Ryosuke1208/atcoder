n = int(input())
ans = "No"
for i in range(n//4+1):
    for j in range(n//7+1):
        k = 4 * i
        d = 7 * j
        if k + d == n:
            ans = "Yes"
print(ans)
