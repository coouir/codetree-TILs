class Class:
    def __init__(self, s, m, t):
        self.s = s
        self.m = m
        self.t = t

a, b, c = input().split()
c = Class(a, b, c)

print("secret code : " + c.s)
print("meeting point : " + c.m)
print("time : " + c.t)