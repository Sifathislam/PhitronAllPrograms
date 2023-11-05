import MySQLdb

mydb_connection = MySQLdb.connect(
    host = "localhost",
    user = "root",
    passwd = "sifath2002"
)

query = "CREATE DATABASE IF NOT EXISTS  SCHOOL_FOR_NEW_PROJECT"
cursor = mydb_connection.cursor()


cursor.execute(query)