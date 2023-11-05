import mysql.connector
mydbconnection = mysql.connector.connect(
    host ="localhost",
    user = "root",
    passwd ="sifath2002"
)
print(mydbconnection)

db_name = "python_moudule_11"

mycursor = mydbconnection.cursor()

sqlquery = "CREATE DATABASE " + db_name

mycursor.execute(sqlquery)
