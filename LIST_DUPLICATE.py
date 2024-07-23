def duplicate(l1,l2):
    count = 0
    for i in l1:
        for j in l2:
            if j == i:
                count += 1
                return count
    return 0
l1=[]
l2=[]
len1 = int(input("Enter the length of first list: "))
len2 = int(input("Enter the length of second list: "))
for i in range(len1):
    val = int(input(f"enter {i} element value:  "))
    l1.append(val)
print("Enter second list elements")
for i in range(len2):
    val = int(input(f"enter {i} element value:  "))
    l2.append(val)

cmp = duplicate(l1,l2)
if cmp>=1:
    print(True)
