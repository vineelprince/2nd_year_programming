def palindrome(a):
    
    x = len(a)
    y = a[0:1+1]
    z = a[-1:-1:-1]
    if x == y :
        print("String is palindrome")
    else :
        print("String is not palindrome")
a = input("Enter a palindrome word : ")
palindrome(a)
