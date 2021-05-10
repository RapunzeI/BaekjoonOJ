import sys
N = int(sys.stdin.readline())
lst = []

for i in range(N):
    h = int(sys.stdin.readline())
    lst.append(h)

lst.reverse()
highest = lst.index(max(lst))

cnt = 0
higher = lst[0]

for i in range(highest):
    if lst[i] > higher:
        if lst[i] > higher:
            higher = lst[i]
        cnt += 1

if lst[highest] <= lst[0]:
    print(cnt + 1)
else:
    print(cnt + 2)
