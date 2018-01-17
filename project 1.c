#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char c1[20],c2[20],a[20];

    double t ,d;
    int q1,q2;

    while (1){
        printf("Enter Currency Name: ");
        gets(c1);

        printf("Enter Amount: ");
        scanf("%d",&q1);
        gets(a);
        printf("Enter Another Currency: ");
        gets(c2);
        //Taka
        if(strcmp(c1,"Taka")==0){
            if(strcmp(c2,"Rupee")==0){
                t=q1*0.86;
            }
            else if(strcmp(c2,"Dollar")==0){
                t=q1*0.013;
            }
            else if(strcmp(c2,"Euro")==0){
                t=q1*0.012;
            }
            else if(strcmp(c2,"Pound")==0){
                t=q1*0.0091;
            }
            else if(strcmp(c2,"Yen")==0){
                t=q1*1.46;
            }
            else if(strcmp(c2,"Swis Frank")==0){
                t=q1*0.013;
            }
        }

        //Rupee
        if(strcmp(c1,"Rupee")==0){
            if(strcmp(c2,"Taka")==0){
                t=q1*1.17;
            }
            else if(strcmp(c2,"Dollar")==0){
                t=q1*0.015;
            }
            else if(strcmp(c2,"Euro")==0){
                t=q1*0.014;
            }
            else if(strcmp(c2,"Pound")==0){
                t=q1*0.010;
            }
            else if(strcmp(c2,"Yen")==0){
                t=q1*1.70;
            }
            else if(strcmp(c2,"Swis Frank")==0){
                t=q1*0.015;
            }
        }


        //Dollar
        if(strcmp(c1,"Dollar")==0){
            if(strcmp(c2,"Taka")==0){
                t=q1*78.33;
            }
            else if(strcmp(c2,"Rupee")==0){
                t=q1*66.99;
            }
            else if(strcmp(c2,"Euro")==0){
                t=q1*0.91;
            }
            else if(strcmp(c2,"Pound")==0){
                t=q1*0.70;
            }
            else if(strcmp(c2,"Yen")==0){
                t=q1*113.80;
            }
            else if(strcmp(c2,"Swis Frank")==0){
                t=q1*0.99;
            }
        }

        //Euro
        if(strcmp(c1,"Euro")==0){
            if(strcmp(c2,"Taka")==0){
                t=q1*86.16;
            }
            else if(strcmp(c2,"Rupee")==0){
                t=q1*73.68;
            }
            else if(strcmp(c2,"Dollar")==0){
                t=q1*1.10;
            }
            else if(strcmp(c2,"Pound")==0){
                t=q1*0.77;
            }
            else if(strcmp(c2,"Yen")==0){
                t=q1*125.17;
                }
            else if(strcmp(c2,"Swis Frank")==0){
                t=q1*1.09;
            }
        }

        //Pound
        if(strcmp(c1,"Pound")==0){
            if(strcmp(c2,"Taka")==0){
                t=q1*111.49;
            }
            else if(strcmp(c2,"Rupee")==0){
                t=q1*95.35;
            }
            else if(strcmp(c2,"Euro")==0){
                t=q1*1.29;
            }
            else if(strcmp(c2,"Dollar")==0){
                t=q1*1.42;
            }
            else if(strcmp(c2,"Yen")==0){
                t=q1*161.97;
            }
            else if(strcmp(c2,"Swis Frank")==0){
                t=q1*1.41;
            }
        }

        //Yen
        if(strcmp(c1,"Yen")==0){
            if(strcmp(c2,"Taka")==0){
                t=q1*0.69;
            }
            else if(strcmp(c2,"Rupee")==0){
                t=q1*0.59;
            }
            else if(strcmp(c2,"Euro")==0){
                t=q1*.0080;
            }
            else if(strcmp(c2,"Pound")==0){
                t=q1*.0062;
            }
            else if(strcmp(c2,"Dollar")==0){
                t=q1*0.0088;
            }
            else if(strcmp(c2,"Swis Frank")==0){
                t=q1*.00877;
            }
        }

        //Swis Frank
        if(strcmp(c1,"Swis Frank")==0){
            if(strcmp(c2,"Taka")==0){
                t=q1*78.89;
            }
            else if(strcmp(c2,"Rupee")==0){
                t=q1*67.47;
            }
            else if(strcmp(c2,"Euro")==0){
                t=q1*0.92;
            }
            else if(strcmp(c2,"Pound")==0){
                t=q1*0.71;
            }
            else if(strcmp(c2,"Yen")==0){
                t=q1*114.61;
            }
            else if(strcmp(c2,"Dollar")==0){
                t=q1*1.01;
            }
        }



        printf("\n\n%0.4lf\n\n",t);
        printf("Press any key to continue");
        getche();
        system ("cls");
    }




}
