#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *meats[5]={"chicken","beef","goats meat","turkey","pork"};
    printf("using continue\n");
    for (int i=0;i<5;i++){
        if(i==2){
                continue;
        }
        printf("%s\n",meats[i]);
    }
    printf("\nUsing break:\n"):
        for (int i=0;i<5; i++){
            if (i==3){
                    break;
        }
        printf("%s\n",meats[i]);

}
return 0;
}
