def get(a, b): # 두 수의 최소공배수
    num = 1
    for i in range(2, min(a, b)):
        if a%i == 0 and b%i == 0:
           num = i
    return (a*b)//num
n = int(input())
list_ = list(map(int, input().split()))
# 최소공배수 a, b> (a*b)/(최대공약수) 
# 최소공배수, 다음수
a = get(list_[0], list_[1])
for i in range(len(list_)-3):
    a = get(a ,list_[i+2])
    #a = get(a, list_[2])
    
print(a)