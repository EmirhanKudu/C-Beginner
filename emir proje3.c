#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	printf("*************SATILIK ARAC*************** \n");
	
	char marka[20],model [20],yil [4],yakit[10],vites [5],km [10],beygir[10];
	
	printf("Marka:  ");
	scanf("%s",marka);
	
	printf("Model:   ");
	scanf("%s",model);
	
	printf("Uretim yili:  ");
	scanf("%s",yil);
	
	printf("Yakit:  ");
	scanf("%s",yakit);
	
	printf("Vites:   ");
	scanf("%s",vites);
	
	printf("Km:   ");
	scanf("%s",km);
	
	printf("Motor gucu:  ");
	scanf("%s",beygir);
	
	printf("Marka: %s \n - Model: %s \n ",marka,model);
	printf("Uretim yili: %s \n - Yakit: %s \n - Vites: %s \n - Km: %s \n - Motor gucu: %s \n ",yil,yakit,vites,km,beygir);
	return 0;
}
