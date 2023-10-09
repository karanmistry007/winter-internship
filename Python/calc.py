#addition
def add(x,y):
    return x+y
#subtraction
def sub(x,y):
    return x-y
#multiplication
def mul(x,y):
    return x*y
#division
def div(x,y):
    return x/y

x=float(input("Enter x: "))

while True:
    choice=input("Enter choice: ")
    y=float(input("Enter y: "))
    if choice in ('+','-','*','/'):
        if choice=='+':
            print(x,"+",y,"=",add(x,y))
            break
        elif choice=='-':
            print(x,"-",y,"=",sub(x,y))
            break
        elif choice=='*':
            print(x,"*",y,"=",mul(x,y))
            break
        if choice=='/':
            print(x,"/",y,"=",div(x,y))
            break
        break    
    break
