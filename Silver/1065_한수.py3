N = int(input())

if 0 < N <= 1000:

  if N < 100: 
    print(N)
  elif 100 <= N <= 110:
    print(99)
  elif 110 < N < 1000: 
    R = 0

    for i in range(100, N+1):
      A = []
      A = [ int(k) for k in str(i) ]
      a1 = A[1] - A[0]
      a2 = A[2] - A[1]

      if a1 == a2: 
        R += 1
      else: 
        pass

    print(99 + R)

  else:
    print("144") 

else:
  pass