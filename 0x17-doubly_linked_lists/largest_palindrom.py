#!/usr/bin/python3
def is_palindrome(num):
    temp = num
    new_num = 0
    while temp:
        new_num *= 10
        new_num += temp % 10
        temp //= 10
    return True if new_num == num else False

largest = 0
for i in range(101, 1000):
    for j in range(101, 1000):
        if (is_palindrome(i * j)):
            if i * j > largest:
                largest = i * j

print(largest)
