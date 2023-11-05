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
            CREATE TABLE Student(
                Roll varchar(4),
                Name varchar(50)
            )
            """

mycursor.execute(sqlquery)
print("Create table successfuly")
