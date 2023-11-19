import pymysql

connection = pymysql.connect(
    host="localhost",
    user="root",
    passwd="sifath2002",
    database="universityenrollment"
)

cursor = connection.cursor()

# IN HERE We will write the code for functionality 
def add_Teacher(first_name, last_name, age, degree):
    if age > 30 :
        qurey = f"""
                INSERT INTO Teacher (First_Name, Last_Name, Age, Degree) VALUES 
                (%s, %s, %s, %s)
            """
        print("\n____Teacher Added Successfully____")
        cursor.execute(qurey,(first_name,last_name,age, degree))
        connection.commit()
    else:
       print("\nYour Age is below 30 you can't add this Teacher")
  
    
def add_Student(First_name, Last_name, age):
    if age > 19 :
            qurey = f"""
                   INSERT INTO Student (First_Name, Last_Name, Age) VALUES 
                    (%s, %s, %s)
                """
            print("\n____Student Added Successfully____")
            cursor.execute(qurey,(First_name,Last_name,age))
            connection.commit()
    else:
        print("\nYour Age is below 19 you can't add this Student")

def add_Course(Course_name):
    query = f"""
            INSERT INTO Course (Course_Name) VALUES (%s)
            """
    cursor.execute(query,(Course_name))
    connection.commit()
    print("\nCourse added sucessfully")
    
def Enroll_Course(S_id, Course_name):
   if S_id > 10000:
        query = f"""
            SELECT Course_id FROM Course
            where Course_name = %s
            """
        cursor.execute(query,(Course_name))
        CourseID = cursor.fetchone()

        query = f"""
                INSERT INTO Enrollment (Who_Enroll, Which_Enroll) VALUES (%s, %s)
                """
        cursor.execute(query, (S_id,CourseID[0]))
        connection.commit()
        print("\nCourse Enrollment Successfully Done")
   else:
       print("\nYou entered wrong Student ID")

def Show_All_Course():
    query = f"""
            SELECT Course_name FROM Course 
            """
    cursor.execute(query)
    allCourse = cursor.fetchall()
    print("____All Available Course____")
    for course in allCourse:
        print("---> ",course[0])
    
def Assign_Course(c_name, t_name, amount):
    query = f"""
            SELECT Course_ID FROM Course WHERE Course_Name = %s
            """
    cursor.execute(query,(c_name))
    c_ID = cursor.fetchone()
    query = f"""
            SELECT Teacher_ID FROM Teacher WHERE First_Name = %s
            """
    cursor.execute(query,(t_name))
    t_ID = cursor.fetchone()

    query = f"""
            INSERT INTO Taking_who (Paymount, WHOICH_TAKING, WHO_TAKING) VALUES (%s, %s, %s)
            """
    cursor.execute(query,(amount,c_ID,t_ID))
    connection.commit()

    print("\nCourse Assign Successfully")

def Show_R_B_N_E():
    qurey = f"""
            SELECT S.First_Name, S.Last_Name
            FROM Student as S
                LEFT JOIN Enrollment as E
                    ON S.Student_ID = E.Who_Enroll
            WHERE E.Who_Enroll IS NULL
            """
    cursor.execute(qurey)
    Data = cursor.fetchall()
    print("\nThose Student Registerd But Not Enrolled Any Course\n")
    for single in Data:
        print(f"---> {single[0]}")





print("\n🙂 Wellcome to University portal")
while True:
    print("""    
    1. Add Teacher
    2. Add Student
    3. Add Course
    4. Enroll Course
    5. Assign Course
    6. Show Registered But Not Enrolled
    7. Exit
    """)
    option = int(input("Give the input of the option: "))

    if option == 1:
        first_name = input(" Give The First Name: ")
        last_name = input(" Give The Last Name: ")
        age = int(input(" Give The Age: "))
        Degree = input(" Give The Degree: ")

        add_Teacher(first_name, last_name, age, Degree)

    elif option == 2:
        first_name = input(" Give The First Name: ")
        last_name = input(" Give The Last Name: ")
        age = int(input(" Give The Age: "))

        add_Student(first_name, last_name, age)
    elif option == 3:
        course_name = input("Please Give the Course Name: ")
        add_Course(course_name)
    elif option == 4:
        Show_All_Course()
        print()
        studentID = int(input("Please Give me your Student ID: "))
        CourseName = input("Please Give the name of the Course Name: ")

        Enroll_Course(studentID, CourseName)
    elif option == 5:
        course_name = input("Give the course name: ")
        Teacher_name = input("Give the name of the teacher: ")
        Pay_ammount = int(input("Give pay Amount: ")) 
        Assign_Course(course_name,Teacher_name,Pay_ammount)
    elif option == 6:
        Show_R_B_N_E()
    elif option == 7:
        connection.close()
        break









