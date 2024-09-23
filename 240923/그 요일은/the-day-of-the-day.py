def f(m, d):
    for i in range(1, m):
        d += arrM[i]
    return d

m1, d1, m2, d2 = map(int, input().split())
A = input()
arrM = [0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
d = f(m2, d2) - f(m1, d1)
print(d//7 + 1)