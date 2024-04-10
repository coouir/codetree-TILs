a_m, a_e = input().split()
b_m, b_e = input().split()

a_m = int(a_m); a_e = int(a_e)
b_m = int(b_m); b_e = int(b_e)

if a_m > b_m:
    print("A")
elif a_m < b_m:
    print("B")
else:
    if a_e > b_e:
        print("A")
    elif a_e < b_e:
        print("B")