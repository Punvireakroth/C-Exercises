#include<stdio.h>
int main()
{
    int currency;
    int choice;
    double riel, dollar, bat;
    double result;
    restart:
    printf("What Currency do you have now? (1:riel, 2:dollar, 3:bat) ");
    scanf("%d",&currency);
    
    switch(currency)
    {
        case 1:
            printf("How much money you want to convert? ");
            scanf("%d",&riel);
            printf("What currency do you want to convert to? (1:riel, 2:dollar, 3:bat) ");
            scanf("%d",&choice);
            if(choice == 2){
                result = riel / 4000;
                printf("result");
            }else if(choice == 3){
                result = riel*0.0084; 
            }
            break;
        case 2:
            printf("How much money you want to convert? ");
            scanf("%d",&dollar);
            printf("What currency do you want to convert to? (1:riel, 2:dollar, 3:bat) ");
            scanf("%d",&choice);
            if(choice == 1){
                result = dollar * 4000;
                printf("%d", result);
            }else if(choice == 3){
                result = dollar * 34.42; 
                printf("%d", result);
            }
            break;
        case 3:
            printf("How much money you want to convert? ");
            scanf("%d",&bat);
            printf("What currency do you want to convert to? (1:riel, 2:dollar, 3:bat) ");
            scanf("%d",&choice);
            if(choice == 1){
                result = riel * 118.72;
                printf("%d", result);
            }else if(choice == 2){
                result = dollar * 0.029; 
                printf("%d", result);
            }
            break;
        default:
            printf("It's invalid input. You exspect to type (1,2 or 3)\n");
            
            break;
    }
   goto restart;
}