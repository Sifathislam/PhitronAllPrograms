""" In here we will see how many guys get pass to the final exam of the year  """

class Student_Marks:

    def __init__(self,Name, Roll):
        self.Name = Name
        self.Roll = Roll
        self.Marks = []

    def add_Marks (self, subject, mark):
        self.subject = subject
        self.mark = mark
        self.Marks.append({'Subject':subject,'Mark': mark})

    def TotalMark(self):
        totalMarks = 0
        for items in self.Marks:
            totalMarks += items['Mark']
        totalMarks = totalMarks / len(self.Marks)
        return totalMarks
    
    def Grade(self):
        if self.TotalMark() >= 80 and self.TotalMark() <= 100:
            print(f"{self.Name} You get A+ Grade")
        elif self.TotalMark() >= 70 and self.TotalMark() <= 79:
            print (f"{self.Name} You get A Grade")
        elif self.TotalMark() >= 60 and self.TotalMark() <= 69:
            print (f"{self.Name} You get A- Grade")
        elif self.TotalMark() >= 50 and self.TotalMark() <= 59:
            print (f"{self.Name} You get B Grade")
        elif self.TotalMark() >= 40 and self.TotalMark() <= 49:
            print (f"{self.Name} You get C Grade")
        elif self.TotalMark() >= 33 and self.TotalMark() <= 39:
            print (f"{self.Name} You get D Grade")
        elif self.TotalMark() >= 0 and self.TotalMark() <= 32:
            print (f"{self.Name} You get Fail You Bitch")
        else:
            print (f"{self.Name} Your Marks Not Found ")

    def canGoNextClass(self):
        if self.TotalMark() == 32:
            print (f"{self.Name} You Can't Upgrade to next Class")
        else:
            print (f"{self.Name} You Get Upgrade to next Class")



# Now printing time 

Sifat = Student_Marks("Sifat Islam",9)
Sifat.add_Marks("CPP",90)
Sifat.add_Marks("DSA",70)
Sifat.add_Marks("Ruby",80)
Sifat.add_Marks("Python",78)
Sifat.add_Marks("C++",52)
Sifat.add_Marks("C",83)

print(f"Total Marks {Sifat.TotalMark()}")
Sifat.Grade()
Sifat.canGoNextClass()