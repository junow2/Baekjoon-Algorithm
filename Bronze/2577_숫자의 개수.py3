A = int(input())
B = int(input())
C = int(input())

value = A * B * C 
n = list(str(value))
n = [ int(i) for i in n ]

print(n.count(0))
print(n.count(1))
print(n.count(2))
print(n.count(3))
print(n.count(4))
print(n.count(5))
print(n.count(6))
print(n.count(7))
print(n.count(8))
print(n.count(9))
