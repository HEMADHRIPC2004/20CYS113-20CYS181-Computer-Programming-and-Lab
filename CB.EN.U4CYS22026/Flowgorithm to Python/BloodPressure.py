print("enter value of BP")
bP = int(input())
if bP >= 140:
    print("Hypertension")
else:
    if bP < 120:
        print("Normal")
    else:
        print("Prehypertension")
