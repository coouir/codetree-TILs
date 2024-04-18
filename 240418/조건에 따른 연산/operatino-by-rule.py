n = int(input())
count = 0 

while n < 1000:
    if n % 2 == 0:
        n = 3*n + 1
    else:
        n = 2*n + 2
    count += 1
print(count)