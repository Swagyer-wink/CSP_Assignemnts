print("hello and welcome to your financail caculator!")
def value(person, name):
    print("Your monthly", name, "is $", person)
    return

income = int(input("how much do you make a month?:\n"))
rent = int(input("how much is your rent?:\n"))
utilities = int(input("what is your utilities cost?:\n"))
groceries = int(input("how much does your groceries cost?:\n"))
trasnportation = int(input("how much does your trasportation cost:\n"))
savings = income*0.2
expenses= rent + utilities + groceries + trasnportation
spending = income-expenses-savings
def percent(type, amount):
    per = amount/income * 100
    
    return f"Your {type} is {per}%."

print(percent("income", income))
print(percent("expenses", expenses))
print(percent("rent", rent))
print(percent("utilities", utilities))
print(percent("groceries", groceries))
print(percent("trasnportation", trasnportation))
