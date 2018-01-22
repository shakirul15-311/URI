def printf(str, *args):
    print(str % args, end='')  #printf supported by 1st 2 lines
    
number=int(1)
        
while (number != 2002):
        number=int(input())
        
        if(number == 2002):
            printf("Acesso Permitido\n" )
        else:
            printf("Senha Invalida\n" )
