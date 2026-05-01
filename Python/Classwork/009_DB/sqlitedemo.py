import sqlite3

con = sqlite3.connect("data.db")

# qry = "create table student(id int, name varchar(20), email varchar(20))"

# qry ="insert into student values(3,'Manish','manish@gmail.com')"

qry = "update "
con.execute(qry)
con.commit()