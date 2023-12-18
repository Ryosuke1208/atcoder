matrix = [[0] * 9 for _ in range(9)]
flag = True

for i in range(9):
    row = list(map(int, input().split()))
    matrix[i] = row

for i in range(9):
    b = [0] * 9
    for j in range(9):
        b[matrix[i][j] - 1] += 1
    if any(count != 1 for count in b):
        flag = False

for j in range(9):
    b = [0] * 9
    for i in range(9):
        b[matrix[i][j] - 1] += 1
    if any(count != 1 for count in b):
        flag = False

for i in range(0, 9, 3):
    for j in range(0, 9, 3):
        b = [0] * 9
        for ii in range(3):
            for jj in range(3):
                b[matrix[i + ii][j + jj] - 1] += 1
        if any(count != 1 for count in b):
            flag = False

if flag:
    print("Yes")
else:
    print("No")
