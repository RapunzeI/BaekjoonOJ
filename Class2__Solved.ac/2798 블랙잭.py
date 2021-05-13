import sys
data = sys.stdin.readline().split(" ")
N = int(data[0])
M = int(data[1])

card = sys.stdin.readline().split(" ")

max = 0
for i in range(N):
    for j in range(i + 1, N):
        for k in range(j + 1, N):
            sum = int(card[i]) + int(card[j]) + int(card[k])
            if M >= sum >= max:
                max = sum

print(max)