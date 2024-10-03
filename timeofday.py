
currenttime = datetime.datetime.now().hour

if currenttime >= 12:
    print("Good morning")
elif currenttime >= 18:
    print("good afternoon goober")
else:
    print("good evening nerd")
