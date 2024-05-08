letters = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
n = int(input())

length = 1
while (n - 1) // 26 ** length:
    n -= 26 ** length
    length += 1
print(n,length)