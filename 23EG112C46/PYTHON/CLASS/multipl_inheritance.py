class Person :
    def details(self):
        self.name =  input("Name : ")
        self.age = int(input("Age : "))

class Worker :
    def worker_details(self):
        self.worker = input("Worker : ")
        self.job_title = input("Job title : ")
        self.salary = float(input("Salary : "))

class Manager(Person,Worker):

    def deprt(self):
        self.department = input("Depatment : ")
        print(f"{self.name}\t{self.age}\t{self.worker}\t{self.job_title}\t{self.salary}\t{self.department}")

m = Manager()
m.details()
m.worker_details()
m.deprt()
print("NAME AGE WORKER JOB_TITLE SALARY DEPARTMENT")
