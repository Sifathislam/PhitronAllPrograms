# Connection for the mysql 
import pymysql
connection = pymysql.connect(
    host = "localhost",
    user = "root",
    password= "sifath2002",
    database = "courseenrollment"
)

cursor = connection.cursor()


def add_Student(firstName, lastName, age):
    qurey = f"""
                INSERT INTO Student(First_Name, Last_Name, Age) VALUES (%s, %s, %s)
            """
    try:
        cursor.execute(qurey,(firstName,lastName,age))
        connection.commit()
        print("Successfully Added Student")
    except pymysql.Error as e:
        print(f"Invalid Error :{e}")


def enroll_Course(Course_Name, Student_Id):
    query = f"""
            SELECT Course_Id FROM Course WHERE Course_Name = %s
            """
    cursor.execute(query,Course_Name)
    courseId = cursor.fetchone()

    query = f"""
            INSERT INTO Enroll (Who_Enroll, Which_Enroll) VALUES (%s, %s)
            """
    cursor.execute(query,(Student_Id,courseId[0]))
    connection.commit()
    print("Succsessfully enrollment")
    

def add_Course(c_name):
    query = f"""
            INSERT INTO Course (Course_Name) Values (%s)
            """
    cursor.execute(query, c_name)
    connection.commit()
    print("Succsessfully Course added")

def show_re_not_enrl():
    query = f"""
            SELECT S.First_Name, S.Last_Name
            FROM Student AS S
                LEFT JOIN Enroll AS E
                    ON S.StudentID = E.Who_Enroll
                WHERE Who_Enroll IS NULL
            """
    cursor.execute(query)
    alldata = cursor.fetchall()
    
    print("All the Person that are not enroll any of our course")
    print()
    for sdata in alldata:
         print(f"------> {sdata[0]} <-------")
    print()
        

def show_All_Course():
    query = f"""
            SELECT Course_Name FROM Course
            """
    cursor.execute(query)
    courses = cursor.fetchall()
    print("<______________Available Courses_____________>")
    print()
    for scourse in courses:
        print(f"-----------> {scourse[0]}")
    print()

while True:
    print("OPTION: 1) ADD Student ")
    print("OPTION: 2) Enroll Course ")
    print("OPTION: 3) ADD Course ")
    print("OPTION: 4) Show Registered but Not Enrolled ")
    print("OPTION: 5) Exit ")
    option  = int(input("Give the input of the Option: "))

    if option == 1:
        firstName = input("Please give me First Name: ")
        LastName = input("Please give me Last Name: ")
        Age = int(input("Please give me AGE: "))

        add_Student(firstName, LastName, Age)

    elif option == 2:
        show_All_Course()
        course_Name = input("Give course name: ")
        student_Id = int(input("Give ID No: "))

        enroll_Course(course_Name, student_Id)
    elif option == 3:
        c_name = input("Give  course name: ")
        add_Course(c_name)
    elif option == 4:
        show_re_not_enrl()
    elif option == 5: 
        connection.close()
        break