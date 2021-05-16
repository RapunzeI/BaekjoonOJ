import sys
data = sys.stdin.readline().split(" ")
N = int(data[0])
M = int(data[1])

lst = [sys.stdin.readline() for _ in range(N)]

Black = ['BWBWBWBW', 'WBWBWBWB', 'BWBWBWBW', 'WBWBWBWB', 'BWBWBWBW', 'WBWBWBWB', 'BWBWBWBW', 'WBWBWBWB']
White = ['WBWBWBWB', 'BWBWBWBW', 'WBWBWBWB', 'BWBWBWBW', 'WBWBWBWB', 'BWBWBWBW', 'WBWBWBWB', 'BWBWBWBW']

cnt = 64

for i in range(N - 7):
    for j in range(M - 7):
        Bcnt = 0
        Wcnt = 0
        for k in range(8):
            for m in range(8):
                if lst[k + i][m + j] != Black[k][m]:
                    Bcnt += 1
                if lst[k + i][m + j] != White[k][m]:
                    Wcnt += 1
        if min(Bcnt, Wcnt) < cnt:
            cnt = min(Bcnt, Wcnt)

print(cnt)