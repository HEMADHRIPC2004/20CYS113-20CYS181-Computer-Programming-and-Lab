print("Enter your roll no :")
rollNo = int(input())
print("Enter your name :")
name = input()
print("Enter your address :")
address = input()
print("Enter your semester :")
semester = input()
print("Number of subjects :")
subjects = int(input())
print("Subject Code :")
subjectCode = int(input())
print("Mark1 :")
mark1 = int(input())
print("Subject Code2 :")
subjectCode2 = int(input())
print("Mark2 :")
mark2 = int(input())
print("Subject Code3 :")
subjectCode3 = int(input())
print("Mark3 :")
mark3 = int(input())
total = mark1 + mark2 + mark3
print("Total :" + str(total))
average = mark1 + mark2 + float(mark3) / 3
print("Average :" + str(average))
