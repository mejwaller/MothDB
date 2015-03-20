import mysql.connector

cnx = mysql.connector.connect(user='martin',password='',
                              host='127.0.0.1',
                              database='mothrecs')
                              
#curA = cnx.cursor(buffered=True)
curA = cnx.cursor()

showtables = ("SHOW TABLES")

curA.execute(showtables)

print curA.fetchall()

curA.close()
cnx.close()                           
                              
                              
                              
                              
                              
                              
                              
                              
                              
                              
                              
                              
                              
                              
                              
                              
                              
                              
                              
                              
                              
                              
                              
cnx.close()
