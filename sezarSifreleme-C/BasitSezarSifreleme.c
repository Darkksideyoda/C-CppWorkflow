//Basslangic seviye Sezar Sifreleme ve Cozme--BAHTIYAR KARAKOC
//Basic Caesar cipher  Encode and decode
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <windows.h>
#define maks_karakter 100
int main()
{
	int i,j,kelime_boyutu,kaydirma_key,tercih;
	char kelime[maks_karakter],sifreli_kelime[maks_karakter],tekrar;
	char mesaj[32];
do {
  printf("[1]Metin Sifreleme");
  printf("\n[2]Sifre Cozme");
  printf("\nSecim Yapiniz: ");
  scanf_s("%d",&tercih);
  switch (tercih) {
    case 1:printf("\nSifrelenecek Kelimeyi Giriniz: ");
  	scanf_s("%s",&kelime);
    printf("\nAnahtar(Kaydirma)Sayisi Giriniz: ");
    scanf_s("%d",&kaydirma_key);
  	kelime_boyutu=strlen(kelime);
  	printf("\nKelimenin Boyutu: %d",kelime_boyutu);
  	printf("\nSifrelenmis Metin:");
  	for(i=0;i<kelime_boyutu;i++)
  	{      if(kelime[i]+kaydirma_key>122)
      {    kelime[i]=kelime[i]+230;}
      sifreli_kelime[i]=kelime[i]+kaydirma_key;
  		printf("%c",sifreli_kelime[i]);
  	}
		sprintf(mesaj,"Sifrelenmis Metin: %s",sifreli_kelime);//show result in message box
		MessageBox(0,mesaj,"Adres-@Darkksideyoda",MB_ICONINFORMATION);//messagebox preferences
		break;
    case 2: printf("\nSifrelenmis Kelimeyi Giriniz: ");
  	scanf_s("%s",&kelime);
    printf("\nAnahtar(Kaydirma)Sayisi Giriniz: ");
    scanf_s("%d",&kaydirma_key);
  	kelime_boyutu=strlen(kelime);
  	printf("\nKelimenin Boyutu: %d",kelime_boyutu);
  	printf("\nCozulmus Metin:");
  	for(i=0;i<kelime_boyutu;i++)
  	{if(kelime[i]-kaydirma_key<97){
      kelime[i]= kelime[i]+26;
}sifreli_kelime[i]=kelime[i]-kaydirma_key;
			
  		printf("%c",sifreli_kelime[i]);
  	}
	  sprintf(mesaj,"Iki Sayinin Toplamlarinin Adresi: %s",sifreli_kelime);//show result in message box
			MessageBox(0,mesaj,"Adres-@Darkksideyoda",MB_ICONINFORMATION);//messagebox preferences
	  break;}
  printf("\n Tekrarlamak ister misiniz? ");
		do {
			scanf_s("%c",&tekrar);
		}while( tekrar == '\n' );
		printf("\n");
  } while(tekrar == 'E' || tekrar == 'e');
return 0;
}
