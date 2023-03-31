print("enter age")
age = int(input())
print("enter gender")
gender = input()
print("enter status")
status = input()
if age >= 18 and age <= 26:
    if status == "single":
        if gender == "male":
            print("eligible")
        else:
            print("not eligible")
    else:
        print("not eligible")
else:
    print("not eligible")
