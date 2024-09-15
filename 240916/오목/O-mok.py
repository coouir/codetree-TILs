arr = [list(input().split()) for i in range(19)]

# 1
for i in range(19):
    for j in range(15):
        if arr[i][j:j+5] == ["1", "1", "1", "1", "1"]:
            print(1)
            print(i+1, j+3)
            exit()
        elif arr[i][j:j+5] == ["2", "2", "2", "2", "2"]:
            print(2)
            print(i+1, j+3)
            exit()

# 2
for i in range(15):
    for j in range(19):
        if arr[i][j]+arr[i+1][j]+arr[i+2][j]+arr[i+3][j]+arr[i+4][j] == "11111":
            print(1)
            print(i+3, j+1)
            exit()
        if arr[i][j]+arr[i+1][j]+arr[i+2][j]+arr[i+3][j]+arr[i+4][j] == "22222":
            print(2)
            print(i+3, j+1)
            exit()

# 3
for i in range(15):
    for j in range(15):
        if arr[i][j]+arr[i+1][j+1]+arr[i+2][j+2]+arr[i+3][j+3]+arr[i+4][j+4] == "11111":
            print(1)
            print(i+3, j+3)
            exit()
        if arr[i][j]+arr[i+1][j+1]+arr[i+2][j+2]+arr[i+3][j+3]+arr[i+4][j+4] == "22222":
            print(2)
            print(i+3, j+3)
            exit()

# 4
for i in range(15):
    for j in range(4, 19):
        if arr[i][j]+arr[i+1][j-1]+arr[i+2][j-2]+arr[i+3][j-3]+arr[i+4][j-4] == "11111":
            print(1)
            print(i+3, j-1)
            exit()