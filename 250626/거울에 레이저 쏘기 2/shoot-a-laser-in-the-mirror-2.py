n = int(input())
arr = [
    input()
    for _ in range(n)
]
print(arr)
print(arr[0][0], len(arr))
"""
/
N: 오른쪽으로 회전
E: 왼쪽으로 회전
S: 오른쪽으로 회전
W: 왼쪽으로 회

\
N: 왼쪽으로 회전
E: 오른쪽으로 회전
S: 왼쪽으로 회전
W: 오른쪽으로 회전
"""