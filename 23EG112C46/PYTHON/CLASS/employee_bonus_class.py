class Employee :
    def __init__(self,name,employee_id,performance_score = 0):

        self.name = name
        self.employee_id = employee_id
        self.performance_score = performance_score

    def update_performance_score(self,new_score):

        if new_score < 0:
            print("Performance score ")
        else :
            self.performance_score = new_score

    def eligibility(self,threshold = 75):

        if threshold > 75 :
            print("Employee is eligible for BONUS")
        else :
            return self.performance_score >= threshold

    def get_details(self):

        return {
            "Name" : self.name,
            "Employee ID" : self.employee_id,
            "Performance" : self.performance_score
            }

emp = Employee("Vineel Krishna","23EG112C46")
print(emp.get_details())

emp.update_performance_score(80)
print(emp.get_details())

print(emp.eligibility())

emp.update_performance_score(70)
print(emp.eligibility())
