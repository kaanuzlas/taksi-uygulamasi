#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
  char taksi_duragi[15];
  char i,j,k=0,odeme_turu[15];
  int taksi_sayisi,kisi_sayisi=0;
  int kart_numarasi,tarih,cvc=0;
  int toplam,cevap=0;
  
  
   printf("Taksi duragini seciniz.\n");
   gets(taksi_duragi);
   printf("%s duragini sectiniz.\n",taksi_duragi);
   printf("-----------------------\n");
   printf("-----------------------\n");
  

   printf("Taksi ve kisi sayisini giriniz.\n");
   scanf("%d %d",&taksi_sayisi,&kisi_sayisi);
   printf("-----------------------\n");
   printf("-----------------------\n");
  
   
    int dizi[3],l,m=0;
  
  	for(l=0;l<3;l++)
	{
		printf("%d. kisinin canta sayisini giriniz: ", l+1);
		scanf("%d",&dizi[l]);
		m=l;
	}
	
	for(l=0;l<=m;l++)
    {
     printf("%d canta \n",dizi[l]);
    }
    printf("-----------------------\n");
	printf("-----------------------\n");
  
  
  
  int bakiye[3][1];
  
  for(j=0;j<3;j++)
    {
    	for(k=0;k<1;k++)
    	{
    	  printf("%d. kisinin %d bakiyesini giriniz.\n",j+1,k+1);
    	  scanf("%d",&bakiye[j][k]);
    	  toplam+=bakiye[j][k];
		}
	}
	printf("Toplam bakiye %d liradir.\n",toplam);
	printf("-----------------------\n");
	printf("-----------------------\n");

  
  
    printf("Odeme turunuzu giriniz.\n");
    scanf("%s",&odeme_turu);
  
  
  cevap=odeme();
	FILE*dosya;
dosya=fopen("C:\\Users\\Acer\\Desktop\\proje1.taksii.txt","w"); 
fputs(taksi_duragi,dosya);
  
  if(cevap==1)
   {
    printf("Kart bilgilerinizi giriniz.\n");
    printf("Sirasiyla kart numarasi, tarih ve cvc giriniz.\n");
    scanf("%d %d %d",&kart_numarasi,&tarih,&cvc);
    printf("-----------------------\n");
	printf("-----------------------\n");
   }
   
   else {}
   
   
   printf("Taksi cagir butonuna basiniz, bekleme sirasina alinicaksiniz.\n");
   printf("-----------------------\n");
   printf("-----------------------\n");


  while(i<2)
   
  {
  	int sira=0;
  	
  	printf("Operetor sirayi girsin.\n");
  	scanf("%d",&sira);
  	
  	if(sira>0)
  	 {
  	   i=1;
  	   printf("Bekleyiniz\n");
     }
  	else {
	  
  	   i=3;
     }
  }
  	printf("-----------------------\n");
	printf("-----------------------\n");
	
	
	
	int ad[15],soyad[15];
	

    strcpy(ad,"Sinan ");
	strcpy(soyad,"Kaya");
	
	strcat(ad,soyad);
	printf("Taksi soforunun adi: %s\n",ad);
	printf("-----------------------\n");
    printf("-----------------------\n");
    Sleep(2000);
    
  
  
    printf("Taksiniz yolda\n");
    printf("-----------------------\n");
    printf("-----------------------\n");
    Sleep(2000);
  
  
    printf("Taksiniz sizi bekliyor.\n");
    printf("-----------------------\n");
    printf("-----------------------\n");
    Sleep(2000);


 merhaba();
 
  
    printf("Odemeyi yapiniz.\n");
    printf("-----------------------\n");
    printf("-----------------------\n");
    Sleep(2000);

  
    printf("Surusu bitir butonuna basiniz.\n");
    printf("-----------------------\n");
    printf("-----------------------\n");
    Sleep(2000);
  
  
 gule_gule();
  
  
	return 0;
}



void merhaba ()

{
  printf ("Ýyi aksamlar, ne tarafa gidecegiz ?\n");
  printf("-----------------------\n");
  printf("-----------------------\n");
  Sleep(2000);
}


void gule_gule ()

{
  printf ("Bizi tercih ettiginiz icin tesekkurler, yine bekleriz\n");
  printf("-----------------------\n");
  printf("-----------------------\n");
  Sleep(2000);
}


int odeme ()

{
	int answer=0;
	printf("Odeme turunuz online ise 1 degilse 0'a basiniz.\n");
    scanf("%d",&answer);
  	printf("-----------------------\n");
	printf("-----------------------\n");
	return answer;

}
