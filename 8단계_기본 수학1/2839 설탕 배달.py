fcnt = 0
thcnt = 0
N=eval(input())
i=N//5
cnt=0

while True:
	if i<0:
		cnt=-1
		break
	if (N-5*i)%3==0:
		fcnt=i
		thcnt=(N-5*i)//3
		cnt=fcnt+thcnt
		break
	else:
		i-=1

print(cnt)