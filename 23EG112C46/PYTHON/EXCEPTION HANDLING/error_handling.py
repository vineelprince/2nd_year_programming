#DivisionError
#ValueError
#TypeError

def divide_and_convert(num1,num2,string_value) :
    num1 = 20
    num2 = 0
    string_value = 'Python'

try :
    num1 / num2
    
except ZeroDivisionError :
    print("Denominator cant be 0")


    
