a, b = input().split()
a = int(a); b = int(b)

cnt = [0] * 10

while True:
    if a <= 1:
        break
    cnt[a%b] += 1
    a = a // b
sum_ = 0

for i in cnt:
    sum_ += i**2

print(sum_)