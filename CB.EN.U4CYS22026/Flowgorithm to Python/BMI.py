print("enter BMI value")
bMI = int(input())
if bMI < 18.5:
    print("Underweight")
else:
    if bMI > 18.5 and bMI <= 24.9:
        print("Normal")
    else:
        if bMI >= 25 and bMI <= 29.9:
            print("Overweight")
        else:
            print("Obese")
