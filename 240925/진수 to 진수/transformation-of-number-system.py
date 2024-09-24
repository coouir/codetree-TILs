a, b = map(int, input().split())
binary = list(map(int, input()))

n = 0
for i in range(len(binary)):
    n = n*a + binary[i]

arr = []
while True:
    if n < b:
        arr.append(n)
        break
    arr.append(n%b)
    n //= b
print(''.join(map(str, arr[::-1])))