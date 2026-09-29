
def fact(n):
    if n == 0 or n == 1:
        return 1
    return n * fact(n - 1)


n = long(input("Enter a number: "))

if n >= 0:
    print("Factorial:", fact(n))
else:
    print("Please enter a number")
