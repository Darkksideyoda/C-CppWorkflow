//Basit Pointer(Gosterici) Mantigi*Basic,Simple Pointer
#include<stdio.h>
#include <windows.h>//for MessageBox windows.h library
int main(int argc, char const *argv[]) {
int sayi1,sayi2,sonuc;//our integer veriables
int *s1p,*s2p,*sncp;//pointers
char mesaj[32];//MessageBox texting
printf("Birinici Sayiyi Giriniz: ");
scanf_s("%d",&sayi1);//first number input
s1p=&sayi1;//assignment first number to pointer
printf("Ikinci Sayiyi Giriniz: ");
scanf_s("%d",&sayi2);//second number input
s2p=&sayi2;//assignment second number to pointer
printf("\n%d Sayisi Bellekte %p Adresine Yerlesti.",sayi1,s1p);//address display
printf("\n%d Sayisi Bellekte %p Adresine Yerlesti.\n",sayi2,s2p);//address display
sonuc=sayi1+sayi2;//summing two number
sncp=&sonuc;//assignment summing to pointer
printf("\n----------------SONUC-----------------\n");//RESULTS
printf("\nIki Sayinin Toplamlarinin Sonucu: %d",sonuc);//summing Result
printf("\nIki Sayinin Toplamlarinin Adresi: %p\n",sncp);//Summing result address
sprintf(mesaj,"Iki Sayinin Toplamlarinin Adresi: %p",sncp);//show result in message box
MessageBox(0,mesaj,"Adres-@bahtiyar",MB_ICONINFORMATION);//messagebox preferences
  return 0;}//Bahtiyar KARAKOC
