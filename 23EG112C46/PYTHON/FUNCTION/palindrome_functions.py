def palindrome(n):
    temp = n
    new = 0
    while(n!=0):
        digit = n%10
        new = new*10+digit
        n = n//10
    if(temp == new):
        return 1
    else:
        return 0
    

n = int(input("Enter a number: "))

if palindrome(n):
    print("Palindrome")
else:
    print("Not palindrome")
