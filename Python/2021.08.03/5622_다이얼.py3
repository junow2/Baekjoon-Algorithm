word = input().split()

[Word] = [list(x) for x in word]

L1 = ['A', 'B', 'C']        # 3
L2= ['D', 'E', 'F']         # 4
L3 = ['G', 'H', 'I']        # 5
L4 = ['J', 'K', 'L']        # 6
L5 = ['M', 'N', 'O']        # 7
L6 = ['P', 'Q', 'R', 'S']   # 8
L7 = ['T', 'U', 'V']        # 9
L8 = ['W', 'X', 'Y', 'Z']   # 10 

Count = 0

for i in Word:
  if i in L1:
    Count += 3 
  elif i in L2:
    Count += 4
  elif i in L3:
    Count += 5
  elif i in L4:
    Count += 6
  elif i in L5:
    Count += 7
  elif i in L6:
    Count += 8
  elif i in L7:
    Count += 9
  elif i in L8:
    Count += 10

print(Count)