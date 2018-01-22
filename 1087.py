def printf(str, *args):
    print(str % args, end='')       
        
while (1):
    
    map = input().split(" ")
    x1,y1,x2,y2=map
    x1=int(x1)
    x2=int(x2)
    y1=int(y1)
    y2=int(y2)
    
    if(x1 == 0 and y1 == 0 and x2 == 0 and y2 == 0):
        break
    
    if(x1 == x2 and y1 == y2):
        printf("0\n")
        
    elif((x2-x1) == -(y2-y1) or -(x2-x1) == -(y2-y1) or -(x2-x1) == (y2-y1) or (x2-x1) == (y2-y1)):
        printf("1\n")
        
    elif (x1 == x2 or y1 == y2):
        printf("1\n")
        
    else:
        printf("2\n")
