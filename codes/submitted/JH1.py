a=input()
for k in range(a):
 b=input();l=0;t=raw_input().split()
 for j in range(len(t)):
  z=int(t[j]);
  if (j%2==0 and z<0)or(j%2!=0 and z>0):l+=z
 if l<0:print"Every Girl Lies!"
 else:print"Some Mirrors Lie!"
