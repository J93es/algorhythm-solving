#	백준 1929.py 2022.11.03
#	에라스토테네스의 체를 활용한 문제풀이

#	에라스토테네스의 체를 활용하여 소수 list 생성 후 list 리턴
def makePrimeLst(n):
	lst = [True] * (n + 1)

	lst[1] = False
	for i in range(2, int(n ** 0.5) + 1):
		if lst[i]:
			for j in range(i * 2, (n + 1), i):
				lst[j] = False
	return lst

#	입력 값 처리
minVar, maxVar = map(int, input().split(' '))

#	소수 list 대입
lst = makePrimeLst(maxVar)

#	리스트 프린트
for i in range(minVar, maxVar + 1):
	if lst[i]:
		print(i)