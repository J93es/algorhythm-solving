import sys
input = sys.stdin.readline

Lst = []
repeatNum = int(input())

for i in range(repeatNum):
	n = int(input())
	Lst.append(n)

Lst.sort()

for tmpLst in Lst:
	print(tmpLst)