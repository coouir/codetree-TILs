a, b = input().split()
a = int(a); b = int(b)

result = 0
if a <= b:
    for i in range(a, b+1):
        if i%5 == 0:
            result += i
else:
    for i in range(b, a+1):
        if i%5 == 0:
            result += i
            
print(result)