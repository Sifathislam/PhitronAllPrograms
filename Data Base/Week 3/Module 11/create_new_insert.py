import mysql.connector

db_name = "python_moudule_11"

mydbconnection = mysql.connector.connect(
    host ="localhost",
    user = "root",
    passwd ="sifath2002",
    database = db_name
)
print("Data base code run successful")


mycursor = mydbconnection.cursor()

sqlquery = """
            INSERT INTO Student(Roll, Name) VALUES ("102", "Sifat")
            """

mycursor.execute(sqlquery)
mydbconnection.commit()
print("Create table successfuly")
