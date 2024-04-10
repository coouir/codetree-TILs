a_c, a_t = input().split()
b_c, b_t = input().split()
c_c, c_t = input().split()

a_t = int(a_t)
b_t = int(b_t)
c_t = int(c_t)

a = 0

if a_c == "Y" and a_t >= 37:
    a += 1

if b_c == "Y" and b_t >= 37:
    a += 1

if c_c == "Y" and c_t >= 37:
    a += 1

if a >= 2:
    print("E")
else:
    print("N")