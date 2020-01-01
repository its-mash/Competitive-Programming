import sys
'''sys.stdin=open('in','r')
sys.stdout=open('out','w')
'''
m=101
dn=[[0 for i in range(m)] for j in range(m)]
c=0
ans=-1000000
for line in sys.stdin:
    for x in line.split():
       x=int(x)
       if x!=-999999:
           dn[0][c]=x;
           if ans<x:
               ans=x
           c+=1
       else:
           for i in range(c):
               for j in range(1,c-i):
                   dn[j][i]=dn[j-1][i]*dn[0][j+i]
                   if ans<dn[j][i]:
                       ans=dn[j][i]

           '''for i in range(c):
               for j in range(c):
                   print(dn[i][j]," ",end='')
               print()
           '''
           print(ans)
           ans=-1000000
           dn=[[0 for i in range(m)] for j in range(m)]
           c=0



