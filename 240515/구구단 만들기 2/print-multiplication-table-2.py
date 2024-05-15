a, b = input().split()
a = int(a); b = int(b)

for i in [2, 4, 6, 8]:
    for j in range(b, a-1, -1):
        print(f"{j} * {i} = {j*i}", end="")

        if j > a:
            print(' / ', end='')
    print()