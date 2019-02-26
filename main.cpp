#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


using namespace std;
int firstNumber(char *str){
    printf("First Task ");
    int k = 1;
    for (int i =0;i<strlen(str);i++){
        if (str[i] == ' '){
            k+=1;
        }
    }
    return k;


}

void secondNumber(char *str){
    printf("Second Task ");
    int k = 0,ind = 0;

    for (int i =0;i<strlen(str);i++){

            if(str[i] == 'o'){
                k=k+1;
            }

            if(str[i] == ' ' || str[i+1]=='\0'){
                if(k==3){
                    for(int j = ind;j<i;j++){
                        printf("%c",str[j]);
                    }
                    if(str[i+1] == '\0')printf("%c",str[i]);
                    printf(" ");
                }
                ind = i+1;
                k=0;
            }
    }
    printf("\n");

}






void thirdNumber(char *str){
    printf("Third Task ");
    int k = 0,ind = 0;

    for (int i =0;i<strlen(str);i++){

            if(str[i] == 'o' || str[i] =='a' || str[i] =='e' || str[i] =='i' || str[i] =='q' || str[i] =='u' || str[i] =='y'){
                k=k+1;
            }

            if(str[i] == ' ' || str[i+1]=='\0'){
                if(k==3){
                    for(int j = ind;j<i;j++){
                        printf("%c",str[j]);
                    }
                    if(str[i+1] == '\0')printf("%c",str[i]);
                    printf(" ");
                }
                ind = i+1;
                k=0;
            }

    }
    printf("\n");

}


void fourTask(char *str){
    printf("Four Task ");
    char s;
    for (int i =0;i<strlen(str);i++){
        for(int j=0;j<strlen(str)-i-1;j++){
            if((int)str[j]>(int)str[j+1]){
                s = str[j];
                str[j]=str[j+1];
                str[j+1]=s;
            }
        }
    }
    printf("%s",str);
    printf("\n");
}


printf("\n");
}

int main()
{
    setlocale(0,"");


    char str[100];

    printf("Введите предложение \n");
    gets(str);
    printf("%d \n",firstNumber(str));
    secondNumber(str);
    thirdNumber(str);
    fourTask(str);


    return 0;

}


