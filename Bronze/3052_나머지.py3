list_N = []
list_X = []

for i in range(0,10):
  n = int(input())
  
  x = n % 42 
  list_N.append(x)
  
  for v in list_N:
    if v not in list_X:
      list_X.append(v)

print(len(list_X))