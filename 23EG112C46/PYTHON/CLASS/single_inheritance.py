#basse : person
#child : employee

class Person :
    def __init__(self):
        self.name = input("Name : ")
        self.age = input("age : ")

class Employee(Person) :

    def emp_details(self):
        
        self.emp_id = input("emp_id : ")

emp = Employee()
emp.name()
emp.age()
emp.emp_id()
