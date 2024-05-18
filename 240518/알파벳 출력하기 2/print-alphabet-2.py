n = int(input())

chr_ = 'A'

for i in range(n):
    for j in range(n):
        if j < i:
            print(' ', end=' ')
        else:
            print(chr_, end=' ')
            chr_ = chr(ord(chr_) + 1)

        if ord(chr_) > ord('Z'):
            chr_ = 'A'
    print()