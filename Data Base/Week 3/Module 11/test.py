import mysql.connector
mydb = mysql.connector.connect(
    host ="localhost",
    user = "root",
    passwd ="sifath2002"
)
print(mydb)