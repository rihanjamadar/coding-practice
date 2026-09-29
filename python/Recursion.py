def print_numbers(n):
    if n == 0:
        return

    print_numbers(n - 1)
    print(n)


n = int(input("Enter a Number: "))

if n > 0:
    print_numbers(n)
else:
    print("Please enter a Number.")

