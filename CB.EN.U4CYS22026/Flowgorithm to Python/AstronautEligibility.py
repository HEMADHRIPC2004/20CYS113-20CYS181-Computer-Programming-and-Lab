# If statements to display whether the person is eligible for being an astronaut
print("enter the persons age")
age = int(input())
print("enter the persons weight")
weight = int(input())
print("smoker(y/n)")
smoker = input()
if weight >= 50 and weight <= 80:
    if age >= 18 and age <= 45:
        if smoker == "n":
            print("The candidate is eligible for being an astronaut")
        else:
            print("The candidate is not eligible for being an astronaut since the person is a smoker")
    else:
        print("The candidate is not eligible for being an astronaut since the persons age is not within (18-45) ")
else:
    print("The candidate is not eligible for being an astronaut since the persons weight is not under (50-80)")
