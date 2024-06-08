import sys
input = sys.stdin.readline

def findNum(targetNum, divNum):
	if targetNum % divNum != 0:
		return -1
	return targetNum // divNum

N = int(input())
cnt = N
for i in range(0, N + 1, 5):
	tmp  = findNum(N - i, 3)
	if tmp != -1 and cnt > tmp + i // 5:
		cnt = tmp + i // 5

if cnt == N:
	print(-1)
else:
	print(cnt)