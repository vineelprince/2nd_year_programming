s = input("Enter a sentence : ")
uppercase = 0
lowercase = 0
digit = 0
space = 0
for i in s :
    if i.isupper() == True:
        uppercase += 1
        
    elif i.islower() == True:
        lowercase +=1
        
    elif i.isdigit() == True:
        digit +=1
        
    elif i.isspace() == True:
        space +=1
        
print("Total CAPITAL LETTERS ARE : ",uppercase)
print("Total LOWER LETTERS ARE   : ",lowercase)
print("Total DIGITS LETTERS ARE  : ",digit)
print("Total SPACES LETTERS ARE  : ",space)
