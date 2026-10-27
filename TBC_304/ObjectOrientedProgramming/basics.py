#from stud import student  ->where stud is the name of the file and student is the class name inside the stud file
class student:
    def __init__(self, name, course ,section):
        self.name=name
        self.course=course
        self.section=section

    def hello(self):
        print(f"Hello {self.name}")

    def bye(self):
        print(f"Bye {self.name}")
    
    def university(): #static method
        print("ABC")
    

s1 = student("Rohan","BCA","E1")

print(s1.name)
print(s1.course)
print(s1.section)

s1.hello()
s1.bye()

student.university()