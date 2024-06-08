import sys
input = sys.stdin.readline


def isPal(n):
	s = str(n)
	l = len(s)
	for idx in range(l // 2):
		if s[idx] != s[l - idx - 1]:
			return False
	return True


num = int(input())
while num != 0:
	if isPal(num):
		print('yes')
	else:
		print('no')
	num = int(input())