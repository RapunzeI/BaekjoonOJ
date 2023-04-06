import sys
time = list(map(int, sys.stdin.readline().split(' ')))
minute = int(sys.stdin.readline())

div = minute // 60
mod = minute % 60

h = time[0] + div
m = time[1] + mod

if m >= 60:
    h += 1
    m = m - 60
if h >= 24:
    h -= 24

print(h, m)