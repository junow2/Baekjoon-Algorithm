N = int(input()) # 임의의 정수 N 
M = 0 
S = -1
T = 0 
N1 = N 
# 0 <= N < 100 # 0보다 크고 99보다 작거나 같다. 

while (N1 != S):
  
  if N < 10:
    n1 = 0 
    n2 = N
    M = (n1 + n2)
    S = ( (n2 * 10) + (M % 10) )
    N = S
    T += 1 

  else:  
    n1 = N // 10 
    n2 = N % 10
    M = (n1 + n2)
    S = ( (n2 * 10) + (M % 10) )
    N = S
    T += 1 

print(T)