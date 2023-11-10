import MySQLdb

db_name = "SCHOOL_FOR_NEW_PROJECT"
mydb_connection = MySQLdb.connect(
    host = "localhost",
    user = "root",
    passwd = "sifath2002",
    db = db_name
)

def create_table(table_name):
    qurey = f"""
            CREATE TABLE IF NOT EXISTS {table_name}(
                ID INT PRIMARY KEY AUTO_INCREMENT,
                NAME VARCHAR(50) NOT NULL,
                AGE INT,
                GRADE FLOAT
            );
            """
    cursor = mydb_connection.cursor()
    cursor.execute(qurey)
def add_student(table_name, name, age, grade):
    qurey = f"""
            INSERT INTO {table_name}(name, age, grade)
            VALUES(%s, %s, %s)
            """
    cursor = mydb_connection.cursor()
    cursor.execute(qurey,(name, age, grade))
    mydb_connection.commit()

def increase_age(table_name, id, val):
    query = f"""
            SELECT age FROM {table_name} WHERE id = %s
            """
    cursor = mydb_connection.cursor()
    cursor.execute(query, (id,))
    age = cursor.fetchone()
         
    new_age= age[0] + val
    query = f"""
            UPDATE {table_name}
            SET AGE = %s
            WHERE ID = %s
            """
    cursor.execute(query,(new_age, id))
    mydb_connection.commit()
    print("Successfully Udate the age")
    
def update_grade(table_name, id, grade):
    qurey = f"""
                UPDATE {table_name}
                SET grade = %s
                WHERE id = %s 
            """
    cursor = mydb_connection.cursor()
    cursor.execute(qurey, (grade,id))
    mydb_connection.commit()
    print("Successfuly updated")

def view_all_student(table_name):
    qurey = f"""
            SELECT * FROM {table_name}
        """
    cursor = mydb_connection.cursor()
    cursor.execute(qurey)

    Students = cursor.fetchall()
    for std in Students:
        id, name, age, grade = std
        print(f"{id} - {name} - {age} - {grade} \n")





while True:
    print("Option (1): Create table")
    print("Option (2): Add Student")
    print("Option (3): Increase Age")
    print("Option (4): Update Grade")
    print("Option (5): View All Student")
    print("Option (6): Exit")

    option = int(input("Choose the option : "))
    
    if option == 1: 
        table_name = input("Give your table name: ")
        create_table(table_name)
    elif option == 2:
        table_name = input("Give your table name: ")
        name = input("Give your name: ")
        age = input("Give your age: ")
        grade = input("Give your grade: ")

        add_student(table_name, name, age, grade)
    elif option == 3:
        table_name = input("Give your table: ")
        id_no = int(input("Give your id: "))
        new_age = int(input("Give your new age: "))

        increase_age(table_name, id_no, new_age)
    elif option == 4:
        table_name = input("Give your table name: ")
        id_no = int(input("Give your id: "))
        grade = float(input("Give the grade: "))

        update_grade(table_name, id_no, grade)
    elif option == 5:
        table_name = input("Give me your table name: ") 
        view_all_student(table_name)
    elif option == 6:
        break