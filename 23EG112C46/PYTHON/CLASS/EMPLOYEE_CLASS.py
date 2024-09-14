class Employee :

    '''Employee details and their expriences'''

    def __init__(self,name,join_year,salary,experience):

        self.name = name 
        self.join_year = join_year 
        self.salary = salary
        j = int(input("Enter joining year : "))
        self.experience = 2024 - j

    def details(self):

        print("Employee Name : ",self.name,"\t","Joining Year : ",self.join_year,"\t","Salary : ",self.salary,"\t","Experience : ",self.experience,"Years")
        

j = exp
e1 = Employee("Peter",1990,200000,exp)
e2 = Employee("Sam",2000,210000,exp)
e3 = Employee("Priya",2010,160000,exp)

e1.details()
e2.details()
e3.details()
