def prime(n):
    count = 0
    for i in range(1,n+1):
        if i%2 == 0 :
            count += 1
        if count == 2:
            print(f"The given number {n} is prime")
        else :
            print("Not a prime number")

n = int(input("Enter value of a : "))
prime(n)
