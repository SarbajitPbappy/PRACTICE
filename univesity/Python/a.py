# # n = int(input("Enter number of terms required: "))
# # first = third=0
# # second = 1

# # print(first, second, end=' ')
# # for i in range(3, n+1):
# #     third = first + second
# #     print(third, end=' ')
# #     first = second
# #     second = third
# # text= input()
# # print(text[::-1])
# # for i in range(1, 6):
# #     for j in range(5, i, -1):
# #         print(" ", end="")
# #     for k in range(1, i*2):
# #         print(i, end="")
# #     print()
# # for i in range(1, 6):
# #     for j in range(1, i+1):
# #         print(i, end="")
# #     print()
# # for i in range(1, 6):
# #     for j in range(5, i, -1):
# #         print(" ", end="")
# #     for k in range(1, i*2):
# #         print("*", end="")
# #     for l in range(2, i+1):
# #         print(l, end="")
# #     print()
# def rollNumbers(numbers, n):
#     if n > len(numbers) or n < 1:
#         return "n is not in range"
#     else:
#         return numbers[n-1], numbers[-n]

# numbers = [21,24,45,6,7,23,9,11,15,18]
# n = int(input("Enter n: "))

# firstRollNumber, secondRollNumber = rollNumbers(numbers, n)

# print(firstRollNumber)
# print(secondRollNumber)

# letters = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
# n = int(input())

# length = 0
# # while (n - 1) // 26 ** length:
# #     n -= 26 ** length
# #     length += 1
# # print(n,length)
# rez = ''

# for i in range(length):
#     ind = (n - 1) // 26 ** (length - i - 1)
#     rez += letters[ind]
#     n -= 26 ** (length - i - 1) * ind

# print(rez)
n = int(input("Enter a number: "))
for i in range(2, n+1):
    numbers = True
    for j in range(2, i):
        if i % j == 0:
            numbers = False
            break
    if numbers:
        print(i, end=' ')
