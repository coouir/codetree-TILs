def get(a, b): # 두 수의 최소공배수
    num = 1
    for i in range(2, min(a, b)+1):
        if a%i == 0 and b%i == 0:
           num = i
    return (a*b)//num

def f(num, a):
    if num == -1:
        return a
    a = get(list_[num],a)   
    return f(num-1, a)
n = int(input())
list_ = list(map(int, input().split()))
# 최소공배수 a, b> (a*b)/(최대공약수) 
# 최소공배수, 다음수
print(f(n-1, 1))