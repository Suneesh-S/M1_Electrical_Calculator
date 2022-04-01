/**
 * @file calc_main.c
 * @author Suneesh-S (you@domain.com)
 * @brief This the main file which control the project
 * @version 0.1
 * @date 2022-03-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<math.h>
#include "print_function.h"

//extern int test_main();

int main(){

    //test_main();

    char choice='N';
    int n;

    printf( "\n\t\t\tElectrical Calculator\n\t" );
    printf( "\t\t---------------------\n\n" );

    do{
        /** Comments need to be printed before the user enter*/
        printf( "\t1.Resistor COLOR Code Calculator\n" );
        printf( "\t2.Ohms law Calculator\n" );
        printf( "\t3.LED Series Resistor Calculator\n" );
        printf( "\t4.Battery Life Calculator\n\n" );
        printf( "\tPlease enter the mode number to operate:" );
        scanf("%d",&n);
        
        /** condition after selection*/
        if(n==1){
            resistor_code_print();
        }else if(n==2){
            ohms_law_print();
        }else if(n==3){
            LED_series_print();
        }else if(n==4){
            battery_life_print();
        }else{
            printf("\tWrong Entry..bye...bye\n");
            break;
        }
        getchar();
        printf( "Do you want to continue(Y/N):");
        scanf("%c",&choice);
        printf( "\n");

    }while(choice=='Y'); 
}