lst=[]
while True:
    n = int(input())
    if n == 0:
        break
    lst.append(n)

max = int((2 * 123456)**0.5)
bert = [True] * 2 * 123456
bert.append(True)

for i in range(2, max + 1):
    if bert[i] == True:
        for k in range(i + i, 2 * 123456 + 1, i):
            bert[k] = False

for j in range(len(lst)):
    cnt = 0

    for i in range(lst[j] + 1, 2 * lst[j] + 1):
        if bert[i] == True:
            cnt += 1
    print(cnt)
