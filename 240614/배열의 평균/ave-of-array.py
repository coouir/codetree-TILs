list_ = []

for i in range(2):
    list_.append(list(map(int, input().split())))

t = 0

for a in range(2):
    t += sum(list_[a])
    print(f"{sum(list_[a])/4:.1f}", end=' ')
print()
for b in range(4):
    s = 0
    for c in range(2):
        s += list_[c][b]
    print(f"{s/2:.1f}", end=' ')
print()
print(f"{t/8:.1f}")