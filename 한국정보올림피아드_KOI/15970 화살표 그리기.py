import sys
N = int(sys.stdin.readline())
lst = []
len = 0
for i in range(N):
    x, y = map(int, sys.stdin.readline().split())
    lst.append([x, y])

for i in range(N):
    short = []
    for k in range(N):
        if lst[i] != lst[k] and lst[i][1] == lst[k][1]:
            short.append(abs(lst[k][0] - lst[i][0]))
    len += min(short)
print(len)