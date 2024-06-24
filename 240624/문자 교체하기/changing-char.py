a, b = input().split()
l_a = list(a)
l_b = list(b)

l_b[0] = l_a[0]; l_b[1] = l_a[1]

print(''.join(l_b))