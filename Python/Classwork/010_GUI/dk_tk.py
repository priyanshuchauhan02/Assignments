from tkinter import *
import mysql.connector as sql

con = sql.connect(
    host = "localhost",
    port = 3306,
    user = "root",
    password = "",
    database = "19feb_python"
)

cursor = con.cursor()

root = Tk()
root.geometry("500x500")
root.title("Registration Form")

def create():
    name = t1.get()
    email = t2.get()
    phone = t3.get()

    qry = "insert into students values(%s,%s,%s,%s)"
    val = (0,name,email,phone)
    cursor.execute()
    con.commit()

    t1.delete(0,END)
    t2.delete(0,END)
    t3.delete(0,END)

l1 = Label(root,text="Username").place
