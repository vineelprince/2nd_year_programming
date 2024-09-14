def prime(n):
    f = 0
    for i in range(1,n):
        if n%i == 0:
            f += 1
    
    if f==1:
        print(f"{num} is prime")
    else:
        print(f"{num} is not a prime")

num = int(input("Enter a number: "))
prime(num)
