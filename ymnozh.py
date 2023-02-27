import random
b=1
a=1
#for i in range(1, 11) :
 #   for j in range(1, 11) :
#        print(i, "*", j, "=", i*j)
arr=[]
size=10

for i in range(0, size) :
    arr.append(random.randint(-100, 100))
for i in arr :
    print(i, end="   ")

print()
print(max(arr))
print(min(arr))

def coun_neg(arr) :
    neg=0
    for i in arr :
        if i<0 :
            neg+=1
        
    print(neg)
coun_neg(arr)
def coun_more(arr) :
    nums=0
    n=int(input("enter number: "))
    for i in arr :
        if i>n :
            nums+=1
    print(nums)
coun_more(arr)
def find_and_replace(arr, size) :
    n=input("enter number: ")
    n2=input("enter replace number: ")
    for i in range(0, size) :
        if i==n :
            arr[i]=n2
            break
find_and_replace(arr, size)
for i in arr :
    print(i, end="   ")