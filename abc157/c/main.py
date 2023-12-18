n, m = map(int, input().split())
l = [list(map(int, input().split()))for _ in range(m)]
ans = -1
for i in range(0, 1000):
    s = str(i)
    if len(s) != n:
        continue
    flg = True
    for j in range(m):
        if int(s[l[j][0]-1]) != l[j][1]:
            flg = False
            break
    if flg:
        ans = i
        break
print(ans)
