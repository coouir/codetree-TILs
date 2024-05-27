#def
def a(n, m):
    n_ = []
    m_ = []
    for i in range(1, n+1):
        if n % i == 0:
            n_.append(i)
    for j in range(1, m+1):
        if m % j == 0 and j in n_:
           m_.append(j)
    print(m_[-1])

#main
n, m = input().split()
n = int(n); m = int(m)
a(n, m)