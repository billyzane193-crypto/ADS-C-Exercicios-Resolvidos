#include <stdio.h>
#include <stdlib.h>
int main(){
    
    int num;

    for(int i = 1; i  <= 20; i++){

        printf("\nDigite um valor de 1 a 20\n");
        scanf("%d", &num);

        switch(num){

            case 1:
            printf("I");
            break;

             case 2:
            printf("II");
            break; 
            
            case 3:
            printf("III");
            break;
            
            case 4:
            printf("IV");
            break;
            
            case 5:
            printf("V");
            break;
            
            case 6:
            printf("VI");
            break; 
            
            case 7:
            printf("VII");
            break; 
            
            case 8:
            printf("VIII");
            break;
            
            case 9:
            printf("IX");
            break;
            
            case 10:
            printf("X");
            break; 
            
            case 11:
            printf("XI");
            break; 
            
            case 12:
            printf("XII");
            break; 
            
            case 13:
            printf("XIII");
            break; 
            
            case 14:
            printf("XIV");
            break; 
            
            case 15:
            printf("XV");
            break; 
            
            case 16:
            printf("XVI");
            break;
            
            case 17:
            printf("XVII");
            break;
            
            case 18:
            printf("XVIII");
            break; 
            
            case 19:
            printf("IXX");
            break; 
            
            case 20:
            printf("XX");
            break;

            default:
            printf("Numero Invalido\n");
            break;
        }

    }




    system("pause");
    return 0;
}