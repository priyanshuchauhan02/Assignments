class Student:
    def __init__(self,id,name,email):
        self.id = id
        self.name = name
        self.email = email

    def display(self):
        print(self.id,self.name,self.email)

s = Student(10,"Priyanshu","priyanshu@email.com")
s.display()

s1 = Student(10,"Priyanshu","priyanshu@email.com")
s.display()


class Products:
    def __init__(items,id,name,brand):
        items.id = id
        items.name = name
        items.brand = brand

    def display(items):
        print(items.id, items.name, items.brand)

p = Products(1,"coffee","nestle")
p.display()