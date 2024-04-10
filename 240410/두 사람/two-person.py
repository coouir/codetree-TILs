a_a, a_g = input().split()
b_a, b_g = input().split()

a_a = int(a_a); b_a = int(b_a)

if (a_a >= 19 and a_g == "M") or (b_a >= 19 and b_g == "M"):
    print(1)
else:
    print(0)