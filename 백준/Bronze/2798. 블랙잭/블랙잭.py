#	2798.py
#	3중 for문으로 구현

#	input handling
tmp, base = map(int, input().split(' '))
lst = list(map(int, input().split(' ')))

interval = 3000001
for x in range(len(lst)):
	for y in range(x + 1, len(lst)):
		for z in range(y + 1, len(lst)):
			tmp = base - lst[x] - lst[y] - lst[z]
			if tmp >= 0 and tmp < interval:
				interval = tmp

print(base - interval)