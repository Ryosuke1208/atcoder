n = int(input())
s = input()
ans = "No"
for i in range(n-1):
    if s[i] == 'a' and s[i+1] == 'b':
        ans = "Yes"
    if s[i] == 'b' and s[i+1] == 'a':
        ans = "Yes"
print(ans)
