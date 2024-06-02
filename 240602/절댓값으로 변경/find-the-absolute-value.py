def f(n_l):
    for i in range(len(n_l)):
        if n_l[i] < 0:
            n_l[i] = -n_l[i]


n = int(input())
n_l = list(map(int, input().split()))

f(n_l)

for j in n_l:
    print(j, end=' ')