m1, d1, m2, d2 = map(int, input().split())
d = ['Mon', 'Tue', 'Wed', 'Thu', 'Fri', 'Sat', 'Sun']
arrM = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

md1 = d1
for i in range(1, m1):
    md1 += arrM[i]

md2 = d2
for i in range(1, m2):
    md2 += arrM[i]

print(d[(md2-md1)%7])