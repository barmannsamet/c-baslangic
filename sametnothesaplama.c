#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	   printf("��renci Ortalama Bilgi Sistemi");
	    printf("\n\n");
	      printf("L�tfen Notlarinizi giriniz");
	  float s1,s2,s3,p,ort;
	     printf("Birinci Sinav Notunuz Giriniz");
	      scanf("%f",&s1);
	    printf("�kinci Sinav Notunuz Giriniz");
	      scanf("%f",&s2);
	    printf("�c�nc� Sinav Notunuz Giriniz");
	      scanf("%f",&s3);
	    printf("Proje Notunuz giriniz");
	    scanf("%f",&p);
	    ort = (s1+s2+s3+p)/4;
	      printf("Ortalaman�z %f\n\n",ort);
	    if(ort<50){
	    	printf("FF");
		}
		if(ort>=50 && ort<60){
			printf("DD");
		}
		if(ort>60 && ort<70){
			printf("CC");
		}
		if(ort>70 && ort<85){
			printf("BB");
		}
		if(ort>85){
			printf("AA");
		}
		return 0;
}
