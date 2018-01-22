def printf(str, *args):
    print(str % args, end='')  
     
while (1):
        map = input().split(" ")
        a ,b = map
        a=int(a)
        b=int(b)
        
        if(a==b):
            break
        else:
            if(a<b):
                printf("Crescente\n")
            else:
                printf("Decrescente\n")
