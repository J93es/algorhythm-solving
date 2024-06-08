#	1085.py
#	use func min()

#	input handling
x, y, w, h = map(int, input().split(' '))

print(min(x, y, w - x, h - y))