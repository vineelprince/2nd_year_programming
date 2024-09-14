Python 3.12.4 (tags/v3.12.4:8e8a4ba, Jun  6 2024, 19:30:16) [MSC v.1940 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
import keyword
keyword.kwlist
['False', 'None', 'True', 'and', 'as', 'assert', 'async', 'await', 'break', 'class', 'continue', 'def', 'del', 'elif', 'else', 'except', 'finally', 'for', 'from', 'global', 'if', 'import', 'in', 'is', 'lambda', 'nonlocal', 'not', 'or', 'pass', 'raise', 'return', 'try', 'while', 'with', 'yield']
while = 10
SyntaxError: invalid syntax
While = 10
a=10
b=A+10
Traceback (most recent call last):
  File "<pyshell#5>", line 1, in <module>
    b=A+10
NameError: name 'A' is not defined. Did you mean: 'a'?
b=a+10
>>> print b
SyntaxError: Missing parentheses in call to 'print'. Did you mean print(...)?
>>> print(b)
20
>>> Sum = 100
>>> total =Sum*20
>>> print(total)
2000
>>> 
======================= RESTART: C:/Users/412/AppData/Local/Programs/Python/Python312/v.py =======================
hi
>>> a=10
>>> b=20
>>> c=30
>>> ssum
Traceback (most recent call last):
  File "<pyshell#15>", line 1, in <module>
    ssum
NameError: name 'ssum' is not defined. Did you mean: 'sum'?
>>> sum
<built-in function sum>
>>> print
<built-in function print>
>>> while
SyntaxError: invalid syntax
>>> sum =a+b+c
>>> sum
60
>>> a
10
>>> c
30
