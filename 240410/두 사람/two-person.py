a_a, a_g = input().split()
b_a, b_g = input().split()

if (a_a >= 19 and a_g == "M") or (b_a >= 19 and b_g == "M"):
    print(1)
else:
    print(0)