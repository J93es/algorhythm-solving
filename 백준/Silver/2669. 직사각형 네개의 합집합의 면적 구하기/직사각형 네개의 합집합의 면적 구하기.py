class boj2669():
	def __init__(self, Size):
		self.lst = [[0 for i in range(int(Size))] for i in range(int(Size))]
		self.areaNum = 0

	def addBox(self, x1, y1, x2, y2):
		i = x1
		while i < x2:
			j = y1
			while j < y2:
				self.lst[i][j] = 1
				j += 1
			i += 1
	
	def area(self):
		self.areaNum = 0
		for i in range(100):
			for j in range(100):
				if self.lst[i][j] == 1:
					self.areaNum += 1
		return self.areaNum


tool = boj2669(100)
for cnt_ in range(4):
	x1, y1, x2, y2 = map(int, input().split(' '))
	tool.addBox(x1, y1, x2, y2)

print(tool.area())