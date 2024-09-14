#PROGRAM TO FIND FACTORIAL OF A NUMBER

fact = 1
a = int(input("Enter value of a : "))
for i in range(1,a+1):
    fact*=i

print(fact)
