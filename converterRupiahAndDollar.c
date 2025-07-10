#include <stdio.h>


void Bio(){
    puts("==========================================");
    puts("|Nama  : Reza Atha Syandana Besariant    |");
    puts("|No    : 34                              |");
    puts("|Kelas : TKJ 12                          |");
    puts("==========================================");
    }


int main(){

    float rupiah, dollar;
    float kurs = 16000.0;
    int choice;
    Bio();

        while(1) {
            puts("\n1. Convert Rupiah to Dollar");
            puts("2. Convert Dollar to Rupiah");
            puts("3. Quit");
            printf(">>");
            scanf("%d", &choice);
        
            if (choice == 3){
                puts("Thank you for using my converter");
                break;
            }
            
            switch(choice){

                case 1:
                    puts(" How much do you want to covert to Dollar? ");
                    printf(">>");
                    scanf("%f", &rupiah);
                    printf("Rp.%.2f = $%.2f", rupiah, rupiah / kurs);
                    break;
                case 2:
                    puts(" How much do you want to covert to Rupiah?");
                    printf(">>");
                    scanf("%f", &dollar);
                    printf("$%.2f = Rp.%.2f", dollar, dollar * kurs);
                    break;
                default:
                    puts("\nenter the right choice!!");
                    break;
            }
            
        
    }
}
