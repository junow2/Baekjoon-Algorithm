n = int(input())
star = [['*' for x in range(n)] for y in range(n)]

for j in range(n):
  for k in range(n):
    if j%3 == 1 and k%3 == 1:
      star[j][k] = ' '

def Star(n, Star_li, cnt):

  row = n // 3
  col = row * 2

  if row == 1: 
    for x in Star_li:
      for y in x:
        print(y, end='')
      print('')
  
  else:
    row1 = row 
    col1 = col

    for _ in range(cnt):   
      for j in range(row1, col1):
        row2 = row
        col2 = col
        for _ in range(cnt):
          for k in range(row2, col2):
            Star_li[j][k] = ' '
          row2 += n
          col2 += n 
      row1 += n
      col1 += n 
 
    return Star(row, Star_li, (cnt*3))

Star(n, star, 1)