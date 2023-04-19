val = "none"
cval = "none"
fval = 0.0

print("Hello! That's the convertor of valuts\n\nIt can convert the valuts such as\neuro\ndollars\nrubles\npounds\n\n")
val = input("Enter valut: ")
fval = float(input("Enter moneys: "))
cval = input("Enter convert valut: ")

if val == "ruble" and cval == "dollar":
    print(fval/81.5)
elif val == "dollar" and cval == "ruble":
    print(fval*81.5)
elif val == "dollar" and cval == "euro":
    print(fval/1.09)
elif val == "euro" and cval == "dollar":
    print(fval*1.09)
elif val == "ruble" and cval == "euro":
    print(fval/89.57)
elif val == "euro" and cval == "ruble":
    print(fval*89.57)
elif val == "pound" and cval == "ruble":
    print(fval*100.9)
elif val == "ruble" and cval == "pound":
    print(fval/100.9)
elif val == "dollar" and cval == "pound":
    print(fval/1.24)
elif val == "pound" and cval == "dollar":
    print(fval*1.24)
elif val == "pound" and cval == "euro":
    print(fval*1.13)
elif val == "euro" and cval == "pound":
    print(fval/1.13)
else:
    print("Invalid valut!")











