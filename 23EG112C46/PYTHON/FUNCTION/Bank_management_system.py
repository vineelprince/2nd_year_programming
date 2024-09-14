import random
intial_balance = 0

print('*'*10,"WELCOME TO BANK MANAGEMENT SYSTEM",'*'*10)

def create_account(account_number,user_name,intial_balance):
    for i in range(10):
        ac_num = random.randint(1,9)
        ac_num = str(ac_num)
        print(ac_num)
    if user == int :
        print("Only alphabets are allowed")
    else : 
        user = print("ENTER USER NAME : ")




def deposit(account,amount):
    if 
    amount = float(input("Enter amount to depoist : "))
    intial_balance.account += amount
    print("\nAmount Deposited!",amount)

def withdraw(account,amount):
    amount = float(input("Enter amount to withdraw : "))
    if intial_balance >= amount:
        intial_balance -= amount
        print("\nAmount withdrew : ",amount)
    else :
        print("\nInsufficient Balance")

def check_balance(account):
    print(f"\n Your account balance is {intial_balance}")

    
        
