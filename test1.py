import pymysql.cursors

conn = pymysql.connect(
        host="localhost",
        user="root",
        passwd="2020",
        database="test",
        charset='utf8'
    )
curs=conn.cursor()

values1 = ('수빈', 33)
query1 = "insert into list1 (name,number) values(%s,%s)"
curs.execute(query1, values1)

conn.commit()
conn.close()

print('end')
