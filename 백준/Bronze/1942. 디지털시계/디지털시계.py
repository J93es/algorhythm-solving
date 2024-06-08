def sumDigit(var):
	answer = 0
	while var > 0:
		answer += var % 10
		var //= 10
	return answer

for i in range(3):
	cnt = 0
	tmp = list(input().split(' '))
	lstStart = list(map(int, tmp[0].split(':')))
	lstEnd = list(map(int, tmp[1].split(':')))

	while lstStart[0] != lstEnd[0] or lstStart[1] != lstEnd[1] or lstStart[2] != lstEnd[2]:
		if (sumDigit(lstStart[0]) + sumDigit(lstStart[1])  + sumDigit(lstStart[2])) % 3 == 0:
			cnt += 1
		lstStart[2] += 1
		if lstStart[2] >= 60:
			lstStart[2] = 0
			lstStart[1] += 1
		if lstStart[1] >= 60:
			lstStart[1] = 0
			lstStart[0] += 1
		if lstStart[0] >= 24:
			lstStart[0] = 0
	if (sumDigit(lstStart[0]) + sumDigit(lstStart[1])  + sumDigit(lstStart[2])) % 3 == 0:
		cnt += 1
	print(cnt)