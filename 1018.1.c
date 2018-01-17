#include <stdio.h>

int main() {
    int input , hundred ,fifty , twenty , ten ,five , two ,one ;


    scanf("%d",&input);


    hundred=(input/100);


    fifty= (input-(hundred*100))/50;


    twenty=(input-((hundred*100)+(fifty*50)))/20;


    ten=(input-((twenty*20)+(fifty*50)+(hundred*100)))/10;


    five=(input-((ten*10)+(twenty*20)+(fifty*50)+(hundred*100)))/5;


    two=(input-((five*5)+(ten*10)+(twenty*20)+(fifty*50)+(hundred*100)))/2;


    one=input-((two*2)+(five*5)+(ten*10)+(twenty*20)+(fifty*50)+(hundred*100));


    printf("%d\n",input);


    printf("%d nota(s) de R$ 100,00\n",hundred);


    printf("%d nota(s) de R$ 50,00\n",fifty);


    printf("%d nota(s) de R$ 20,00\n",twenty);


    printf("%d nota(s) de R$ 10,00\n",ten);


    printf("%d nota(s) de R$ 5,00\n",five);


    printf("%d nota(s) de R$ 2,00\n",two);


    printf("%d nota(s) de R$ 1,00\n",one);


    return 0;


}
