n = int(input())
arr = list(map(float, input().split()))
total = sum(arr)/len(arr)

print("{:.1f}".format(total))
if total >= 4:
    print('Perfect')
elif total >= 3:
    print('Good')
else:
    print('Poor')