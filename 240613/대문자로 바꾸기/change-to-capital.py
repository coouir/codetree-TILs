arr2 = []

for i in range(5):
    arr1 = list(input().split())
    arr2.append(arr1)

for a in range(5):
    for b in range(3):
        print(arr2[a][b].upper(), end=' ')
    print()