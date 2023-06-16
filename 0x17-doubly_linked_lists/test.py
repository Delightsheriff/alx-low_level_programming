#!/usr/bin/python3
def is_palindrome(n):
    s = str(n)
    return s == s[::-1]


def largest_palindrome_product(n):
    max_palindrome = 0
    for i in range(1, n + 1):
        for j in range(1, n + 1):
            product = i * j
            if is_palindrome(product):
                max_palindrome = max(max_palindrome, product)
    return max_palindrome


print(largest_palindrome_product(1000))
