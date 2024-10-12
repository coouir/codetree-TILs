arr = list(input())

while len(arr) > 1:
    n = int(input())

    if n >= len(arr):
        arr.pop(len(arr)-1)
    else:
        arr.pop(n)
    print("".join(arr))