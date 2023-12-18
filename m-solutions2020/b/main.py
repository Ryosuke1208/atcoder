a, b, c = map(int, input().split())
K = int(input())
ans = "No"
for i in range(K+1):
    for j in range(K+1):
        for k in range(K+1):
            x = a * (1 << i)
            y = b * (1 << j)
            z = c * (1 << k)
            if i+j+k <= K and x < y and y < z:
                ans = "Yes"
print(ans)
