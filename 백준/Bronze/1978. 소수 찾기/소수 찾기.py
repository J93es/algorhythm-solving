import sys
input = sys.stdin.readline

def	isPrime(n):
	if n <= 1:
		return False
	elif n == 2:
		return True
	else:
		for i in range(2, int(n ** 0.5) + 1):
			if n % i == 0:
				return False
		return True

answerCnt = 0
repeatNum = int(input())
lst = list(map(int, input().split(' ')))
for i in range(repeatNum):
	if isPrime(lst[i]):
		answerCnt += 1

print(answerCnt)