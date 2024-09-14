#IMPLEMENTATION OF QUEUE USING MODULE

from collections import deque

que = deque()

que.append(30)
que.append(60)
que.append(90)

print("INITIAL QUEUE IS ",que)

que.popleft()
print("Queue after deleting 1 element : ",que)
que.popleft()
print("Queue after deleting 2 elements : ",que)
