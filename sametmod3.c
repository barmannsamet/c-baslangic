#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 int x;
	printf("L�tfen bir sayi giriniz");
	 scanf("%d",&x);
	  if(x%5==0){
	  	printf("Bu sayi Tam B�l�n�r");
	  }
	  else{
	  	printf("Bu sayi tam b�l�nmez");
	  }
return 0;
}
