import math
from suggestion.py import suggestion
note =[]
grade=1
while True:
    grade = float(input("Input a grade (type 0 to stop)-> "))
    if grade==0:
        break
    note.append(grade)

sum = 0

for i in note:
    sum += i
print("Your finale grade is", sum/len(note))

 
