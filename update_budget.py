
print("hello and welcome to your financail caculator!")
income = float(input("how much do you make a month?:\n"))
rent = float(input("how much is your rent?:\n"))
utilities = float(input("what is your utilities cost?:\n"))
groceries = float(input("how much does your groceries cost?:\n"))
trasnportation = float(input("how much does your trasportation cost:\n"))
savings = income*0.2
expenses= rent + utilities + groceries + trasnportation
spending = income-expenses-savings
def percent(type, amount):
    per = amount/income * 100
    
    return f"Your {type} is {per}% income."
print("you make", income)
print("your expenses are", expenses)
print("your rent is", rent)
print("your utilities are", utilities)
print("your groceries are", groceries)
print("your trasnportation cost is", trasnportation)
prent = (float(rent)/float(income))*100
putilities = (float(utilities)/float(income))*100
pgroceries = (float(groceries)/float(income))*100
ptrasnportation = (float(trasnportation)/float(income))*100
print("your rent is", prent)
print("your uitlities is", putilities)
print("your groceries is", pgroceries)
print("your trasnportation is", ptrasnportation)
