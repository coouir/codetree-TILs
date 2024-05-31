def a_b(a, b):
    return a**b

a, b = tuple(map(int, input().split()))

print(a_b(a, b))