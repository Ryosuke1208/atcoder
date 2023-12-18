def solve(n):
    if n == 0:
        return 1
    else:
        cnt = 0
        num = i
        while num:
            if num % 2 == 0:
                num //= 2
                cnt += 1
            else:
                break
        return cnt


n = int(input())
ans = 0
ans_cnt = 0
for i in range(1, n+1):
    if solve(i) >= ans_cnt:
        ans = i
        ans_cnt = solve(i)


print(ans)
