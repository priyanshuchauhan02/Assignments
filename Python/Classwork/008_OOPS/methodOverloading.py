from multipledispatch import dispatch 

class Calc:
    
    @dispatch(int,int,int)
    def add(self,a,b,c):
        print(f"Addition is {a+b+c}")

    @dispatch(int,int)
    def add(self,a,b):
        print(f"Addition is {a+b}")

c = Calc()
c.add(10,20,30)
c.add(10,20)