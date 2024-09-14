#IMPLEMENTATION OF STACK USING MODULE

from collections import deque

stk = deque()

stk.append(30)
stk.append(60)
stk.append(90)

print("INITIAL STACK IS ",stk)

stk.pop()
print("Stack after deleting 1 element : ",stk)
stk.pop()
print("Stack after deleting 2 elements : ",stk)
