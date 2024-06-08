def sumDigitStr(s):
	answer = 0
	for i in s:
		answer += int(i)
	return str(answer)

def recursion_isDivided_by3(targetStr, cnt):
	if len(targetStr) == 1:
		if int(targetStr) % 3 == 0:
			return bool(True), cnt
		else:
			return bool(False), cnt
	else:
		return recursion_isDivided_by3(sumDigitStr(targetStr), cnt + 1)

jud, cnt = recursion_isDivided_by3(str(input()), 0)

print(cnt)
if jud == bool(True):
	print('YES')
else:
	print('NO')