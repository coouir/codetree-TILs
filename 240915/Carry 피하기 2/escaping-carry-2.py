n = int(input())
arr = [input() for i in range(n)]

M = -1

for i in range(n):
    for j in range(i+1, n):
        for k in range(j+1, n):
            a, b, c = arr[i], arr[j], arr[k]
            l = max(len(a), len(b), len(c))

            ra = a[::-1]
            rb = b[::-1]
            rc = c[::-1]

            if len(a) != l:
                ra = ra + '0'*(l-len(a))
            if len(b) != l:
                rb = rb + '0'*(l-len(b))
            if len(c) != l:
                rc = rc + '0'*(l-len(c))
            check = True
            for m in range(l):
                if int(ra[m])+int(rb[m])+int(rc[m]) > 9:
                    check = False
                    break
            if check:
                M = max(M, int(a)+int(b)+int(c))
print(M)