A = int(input())

if A >= 0 and A <= 100:
  if A >= 90:
    print('A')
  elif A >= 80:
    print('B')
  elif A >= 70:
    print('C')
  elif A >= 60:
    print('D')
  else:
    print('F')
else: 
  print('F')