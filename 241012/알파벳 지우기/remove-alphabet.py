def f(string):
    x = []
    for i in string:
        if '0' <= i <= '9':
            x.append(i)
    return(int(''.join(x)))
    
print(f(input())+f(input()))