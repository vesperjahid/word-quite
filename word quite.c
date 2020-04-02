#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char data[100],i=0,len;
    printf("Enter word: ");
    scanf("%s",data);

    len = strlen(data);

    if(len>10){
            printf("\n\t%c%d%c",data[0],len-2,data[len-1]);
    }else{
        printf("\n\t %s\n",data);
    }

    getch();
    return 0;
}
