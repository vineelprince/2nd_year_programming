#Finally block

try :
    first_num = int(input("Enter number to divide : "))
    second_num = int(input("Enter zero : "))
    value_error= int(input("Enter any statement : "))

except ZeroDivisionError :
    print("\nNumber cant be divided by 0")

except ValueError :
    print("\nInt cannot store string values")

finally :
    print("\nExecution Completed....")
