#include<stdio.h>

int main()
{
    int R,C;
    printf("Enter the Rank: ");
    scanf("%d %d",&R,&C);

    if(R > 2000){
        if(C == 0){
            printf("Compiler Water\n");
        }
        else if(C > 1000)
        {
            printf("Quantum Pizza\n");
        }
        else if(C >= 1 && C <= 1000)
        {
            printf("Neural Noodles\n");
        }
    }
    else{
        if(C == 0){
            printf("Null Soup\n");
    }
    else if(C > 1000){
        printf("Buggey Burger\n");
    }else if(C >= 1 && C <= 1000){
        printf("Logic Lemonade\n");
    }
}
    return 0;
}