M=eval(input())
N=eval(input())

b=True
sum=0
cnt=0
lst=[]

for i in range(M, N+1):
    for k in range(2, i):
        if i % k == 0:
            b=False
            break
    if b == True and i > 1:
        cnt+=1
        sum+=i
        lst.append(i)
    b=True

if cnt == 0:
    print(-1)
else:
    print(sum)
    print(min(lst))