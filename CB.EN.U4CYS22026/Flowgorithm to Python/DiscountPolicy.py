# Program implementing a discount policy for TEACHERS
print("Welcome to KUMARS MUSIC")
print("Is the person a teacher(y/n)")
teacher = input()
print("Enter the amount purcahsed for")
value = float(input())
if teacher == "y":
    if value <= 10000:
        print("The person is eligible for 10% discount on their purchase")
        print("Amount to be paid after discount:" + str(value * 0.9))
    else:
        if value > 10000:
            print("The person is eligible for 12% discount on their purchase")
            print("Amount to be paid after discount:" + str(value * 0.88))
else:
    print("The person is not eligible for the discount , since the person is not a teacher ")
    print("Amount to be paid :" + str(value))
