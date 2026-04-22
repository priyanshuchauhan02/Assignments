class A:
    def __init__(self):
        print("A constructor")

    def display(self):
        print("Class A display calling")


class B:
    def __init__(self):
        print("B constructor")

    def display(self):
        print("Class B display calling")
        

class C(A,B):
    def __init__(self):
        B().__init__(self)

    def display(self):
        print("C display calling")
        B().display()


c = C()
c.display()