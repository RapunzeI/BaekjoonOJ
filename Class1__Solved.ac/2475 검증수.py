import sys
serialNum = list(map(int, sys.stdin.readline().split()))

testNum = 0
for i in range(5):
    testNum += serialNum[i]**2

print(testNum % 10)