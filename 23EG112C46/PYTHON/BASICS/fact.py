def fact(n):
    if n == 1 or n == 0 :
        return 1
    else :
        return n*fact(n-1)
n = int(input("Enter value of a : "))
a = fact(n)
print(f"Factorial of {n} is ",a)

    

