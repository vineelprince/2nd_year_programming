
try :

    first = int(input("Enter number to divide : "))
    second = int(input("Enter zero : "))
    value_error= int(input("Enter any statement : "))
    
    divide = first/second
    
    

except (ZeroDivisionError,ValueError):
    if (ZeroDivisionError == True):
        print("\nNumber cant be divided by 0")
    if ValueError == True:
        print("\nType conversion is not possible")
finally :
    print("\nExecution Completed....")
