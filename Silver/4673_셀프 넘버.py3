XS = [ x for x in range(1,10001)] 

def d(n):
  A = []
  
  for i in str(n):
    A.append(i)
  
  A = [ int(j) for j in A ]
  result = n + sum(A)

  return result

for i in range(1, 10001):
  if d(i) in XS:
    XS.remove(d(i))
  else:
    pass

for k in XS:
  print(k) 