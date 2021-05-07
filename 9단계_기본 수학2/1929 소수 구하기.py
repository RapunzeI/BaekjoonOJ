M, N = map(int, input().split())
if M==1:
    M+=1

lst = [True] * (N+1)
max = int(N**0.5)

for i in range(2, max+1):
    if lst[i] == True:
        for k in range(i+i, N+1, i):
            lst[k] = False
for k in range(M, N+1):
    if lst[k]==True:
        print(k)
