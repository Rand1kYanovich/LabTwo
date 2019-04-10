#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


using namespace std;

int main()
{

    setlocale(0,"");

    double cashConst = 1000;

    int n;
    FILE *f;
    char p[50];
    f= fopen("lab3.txt","r");

    struct Student{
        char name[50];
        int number;
        int marks[5];
        int cash;
    };
    printf("Введите размер массива ");
    scanf("%d",&n);

    struct Student STUDENT[n];
    struct Student tmp;


    for(int i = 0;i<n;i++){

            double sr = 0;
            fscanf(f,"%s",STUDENT[i].name);
            fscanf(f,"%d",&STUDENT[i].number);
            for (int j = 0;j<5;j++){
                fscanf(f,"%d",&STUDENT[i].marks[j]);
                 sr = sr +STUDENT[i].marks[j];

            }
            sr = sr / 5;

            if(sr==5){
                STUDENT[i].cash = cashConst * 2;
            }else if(sr ==4){
                STUDENT[i].cash = cashConst ;
            }else if(sr >4 && sr <5){
            STUDENT[i].cash = cashConst * 1.6;
            }else{
                STUDENT[i].cash = 0;
            }
    }


    for(int i = 1;i<n;i++){
        for(int j=i;j>0;j--){
        if(strcmp(STUDENT[j-1].name,STUDENT[j].name)>0){
            tmp = STUDENT[j];
            STUDENT[j] = STUDENT[j-1];
            STUDENT[j-1] = tmp;

            }


    }

    }

     for(int i = 0;i<n;i++){
       printf("%s %d ",STUDENT[i].name,STUDENT[i].number);
       for(int j = 0;j<5;j++){
        printf("%d ",STUDENT[i].marks[j]);
       }
       printf("%d \n",STUDENT[i].cash);
    }


    printf("\n\n");







    return 0;
}
