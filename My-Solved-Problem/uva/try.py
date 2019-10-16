import sys
lastMinusMul=1;
currentMax=-999999
currentMul=1

for line in sys.stdin:
    for x in line.split():
        x=int(x)
        if x==-999999:
            print(int(currentMax))
            lastMinusMul=1
            currentMax=-999999
            currentMul=1
        else:
           currentMul*=x;
           if currentMul >= 0:
               currentMax=max(currentMax,currentMul)
               if currentMul==0:
                   currentMul=1
                   lastMinusMul=1
           elif currentMul < 0:
               currentMax=max(currentMax,currentMul//lastMinusMul)
               if lastMinusMul==1:
                   lastMinusMul=currentMul




