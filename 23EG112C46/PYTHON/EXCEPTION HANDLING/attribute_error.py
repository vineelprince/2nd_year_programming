
class Car :
    def __init__(self) :
        self.make = 'Ford'
        self.model = 'Mustang'
        self.year = 1965
    def details(self):
        print(self.make,self.model,self.year)
d = details()
d.details()

try:
    find = print("Enter element : ")


except AttributeError :
    print(f"{find} not found in Car class")
