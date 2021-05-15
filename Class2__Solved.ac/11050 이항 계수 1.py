import sys
import math
data = sys.stdin.readline().split(" ")
N = int(data[0])
K = int(data[1])

nCk = math.factorial(N) // (math.factorial(K) * math.factorial(N-K))
print(nCk)
print(int(5/2))