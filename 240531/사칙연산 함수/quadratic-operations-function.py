def result(a, b, c):
    if b == '+':
        return a + c
    elif b == '-':
        return a - c
    elif b == '/':
        return int(a/c)
    elif b == '*':
        return a*c
    else:
        return False

arr = list(input().split())

arr[0] = int(arr[0]); arr[2] = int(arr[2])

result = result(arr[0], arr[1], arr[2])

if result:
    print(f'{arr[0]} {arr[1]} {arr[2]} = {result}')
else:
    print(False)