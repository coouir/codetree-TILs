def print_star(num):
    if num == 0:
        return

    print('* '*num)
    print_star(num-1)
    print('* '*num)

n = int(input())
print_star(n)