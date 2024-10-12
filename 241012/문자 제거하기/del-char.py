arr = list(input())
N = []
s = ''.join(arr)

while (True):
    try:

        x = int(input())
        if x >= len(arr):
            x = len(arr)-1
        N.append(x)
        
        s = ''
        for i in range(len(arr)):
            if i not in N:
                s += arr[i]
        print(s)
    except EOFError:
        break