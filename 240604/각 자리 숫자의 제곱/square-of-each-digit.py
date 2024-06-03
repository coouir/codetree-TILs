def s(num):
    if num < 10:
        return num**2
    return s(num//10) + (num%10)**2

n = int(input())
print(s(n))