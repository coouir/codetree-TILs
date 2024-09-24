binary = list(map(int, input()))
num = 0
for i in range(len(binary)):
    num = num*2 + binary[i]

num = num * 17
arr = []

while True:
    if num < 2:
        arr.append(num)
        break
    arr.append(num%2)
    num //= 2

print(''.join(map(str, arr[::-1])))