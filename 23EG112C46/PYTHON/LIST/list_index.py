L1 = ['linux','is','good']
L2 = [0,1,1,2,0]
L3 = []
for i in range(len(L2)):
    val = L1[L2[i]]
    L3.append(val)
print(L3)
