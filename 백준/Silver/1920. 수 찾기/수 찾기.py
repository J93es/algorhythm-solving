def binSearch(targetLst, targetElem, left, right):
	if left > right:
		return bool(False)
	
	mid =  (left + right) // 2
	var = targetLst[mid]
	if  var == targetElem:
		return bool(True)
	elif var > targetElem:
		return binSearch(targetLst, targetElem, left, mid - 1)
	else:
		return binSearch(targetLst, targetElem, mid + 1, right)


lstN = []
input()
lstN = list(map(int, input().split(' ')))
lstN.sort()

lstM = []
input()
lstM = list(map(int, input().split(' ')))

lenN = len(lstN)
for i in lstM:
	if binSearch(lstN, i, 0, lenN - 1) == bool(True):
		print(1)
	else:
		print(0)