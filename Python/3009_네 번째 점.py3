x1, y1 = map(int, input().split())
distance_x = 0 
distance_y = 0
cnt_x = 0
cnt_y = 0

for _ in range(2):
  x, y = map(int, input().split())
  if x1 != x:
    distance_x = x
    cnt_x += 1 

  if y1 != y:
    distance_y = y
    cnt_y += 1

if cnt_x == 2: 
  res_x = x1 
else:
  res_x = distance_x 

if cnt_y == 2:
  res_y = y1
else:
  res_y = distance_y

print(res_x, res_y)