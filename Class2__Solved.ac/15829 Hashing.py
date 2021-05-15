import sys
L = int(sys.stdin.readline())
str = sys.stdin.readline()
Hash = 0
MOD = 1234567891
for i in range(L):
    Hash += ((ord(str[i]) - 96) * 31**i) % MOD
print(Hash % MOD)