def HelloWorld(N):
    if N == 0:
        return 0
    print("HelloWorld")
    HelloWorld(N-1)

N = int(input())
HelloWorld(N)