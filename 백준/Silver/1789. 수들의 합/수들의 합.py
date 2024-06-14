i = 0
cnt = 0
num = int(input())

while (i <= num):
	i += cnt + 1
	cnt += 1
        
if (cnt > 0):
	print(cnt - 1)
else:
	print(0)