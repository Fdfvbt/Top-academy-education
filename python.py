def print_all(n, size) :
    for i in range(n, size) :
        print(i)

def while_else(n) :
    while n>0 :
        print(n)
        n-=1
    else :
        print("end")
        
        
while True:
    print_all(2, 12)
    while_else(3)
    a=int(input())
    s=input()
    b=int(input())
    if s=="+":
        print(" =", a+b)
    elif s=="-":
        print(" =", a-b)
    elif s=="*":
        print(" =", a*b)
    elif s=="/":
       print(" =", a/b)
    else :
        break