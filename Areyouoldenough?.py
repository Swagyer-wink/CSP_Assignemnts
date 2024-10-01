age = 16
voter = "yes"
driver = "no"
haveyourpermit = "yes"
gotoschool = "yes"
if age >= 18 and voter == "yes":
    print("congrats you are old enough to vote!")
else:
    print("You can not vote yet.")
if age >= 16 and driver == "yes":
    print("congrats you are old enough to drive!")
else:
    print("You can not drive quite yet:(")
if age >= 15 and haveyourpermit == "yes":
    print("congrats you have a learns permit!")
else:
    print("You dont have your permit but you are on your way!")
if age >= 5 and gotoschool == "yes":
    print("Congrats you go to school!")
