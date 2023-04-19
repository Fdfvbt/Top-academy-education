list1 = {2,3,4,5,6,7,6}
list2 = {4,5,6,8,8,5,5}
list3 = {0}
buf=0
for i in list1:
    list3[i]=list1[i]
    buf+=1
for i in list2:
    list3[buf]=list2[i]
    buf+=1
for i in list3:
    print(list3[i], " ")