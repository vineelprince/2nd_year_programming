def sum_of_digits(num):
    Sum = 0
    while(num != 0):
        digit = num%10
        Sum = Sum + digit
        num = num//10
    return Sum
num = int(input("Enter a number: "))
if num>=0:
    Sum = sum_of_digits(num)
    print("The sum of digits is:",Sum)
else:
    print("Enter a valid number")
