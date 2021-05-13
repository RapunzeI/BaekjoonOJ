import sys
N = int(sys.stdin.readline())

for k in range(N + 1):
    sum = k
    i = k
    while True:
        if i < 10:
            sum += i
            break
        sum += i % 10
        i = i // 10
    if sum == N:
        break

if k == N:
    print(0)
else:
    print(k)
