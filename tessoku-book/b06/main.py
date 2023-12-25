n = int(input())
a = list(map(int, input().split()))
q = int(input())
l = [None] * q
r = [None] * q

for i in range(q):
    l[i], r[i] = map(int, input().split())

atari = [None] * (n + 1)
hazure = [None] * (n + 1)

atari[0] = 0
hazure[0] = 0

for i in range(n):
    atari[i + 1] = atari[i]
    hazure[i + 1] = hazure[i]
    if a[i] == 1:
        atari[i + 1] += 1
    else:
        hazure[i + 1] += 1

for i in range(q):
    win = atari[r[i]] - atari[l[i] - 1]
    lose = hazure[r[i]] - hazure[l[i] - 1]
    if win == lose:
        print("draw")
    elif win > lose:
        print("win")
    else:
        print("lose")
