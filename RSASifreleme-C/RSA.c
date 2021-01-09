//RSA SIFRELEME-RSA ENCRYPTION *BAHTIYAR KARAKOC*@cprogramla*
#include<stdio.h> #include<math.h> #include<string.h>
#define maks_karakter 200//max character for text array.
int ascimetin[maks_karakter];char metin[maks_karakter];//arrays
float i,fi,cd,e,modulo,goster=1,n,d,c,m,crypt,x;//variables
double RSAS();
int main(int argc, char const *argv[]) {
float p,q;int sec,i;
  printf("p Degerini Giriniz: ");//p value
  scanf_s("%f",&p);
  printf("q Degerini Giriniz: ");//q value
  scanf_s("%f",&q);
  printf("",RSAS(p,q));//Our rsa func.
  printf("\nOBEB(%0.f,%0.f) = %0.f\n", fi, e, goster);//gcd for Toitent and e
  if(goster!=1)//if gcd isn't equal 1
  {printf("\nHatali Giris Talimatlara Uyunuz!!");}//wrong input for e
  printf("\nd Sayisi = %0.f\n",d);//d number
  printf("\nAcik Anahtar=(%0.f,%0.f)\n",n,e);//Public key
  printf("\nGizli Anahtar=(%0.f,%0.f)",n,d);//private key
  printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
  printf("\n[1]Sayi Sifrele");//number ENCRYPTION
  printf("\n[2]Metin Sifrele");//text ENCRYPTION
  printf("\nSecim Yapiniz: ");
  scanf("%d",&sec);
  switch(sec){
  	case 1: printf("\nSifrelenecek Sayiyi Giriniz: ");//input m value
  			scanf("%f",&m);
  			c=pow(m,e);//ENCRYPTION formula
			  crypt=fmod(c,n);//==>
  			printf("\nSifreli Sayi: %0.f",crypt);break;
    case 2: printf("\nSifrelenecek Metini Giriniz: ");
  			scanf("%s",&metin);//we are taking a text
  			cd=strlen(metin);//and detected char length
  		  printf("\nMetnin ASCII Kodlari:");//related text characters in ascii table
  			for(i=0;i<cd;i++){
  				printf("-%d",metin[i]);
  				ascimetin[i]=metin[i];}
  			for(i=0;i<cd;i++){
  				c=pow(ascimetin[i],e);//same ENCRYPTION formula for ascii numbers
			    crypt=fmod(c,n);
  				printf("\nSifreli Metin:%0.f = [%c]Harfi",crypt,metin[i]);}}
	         getch();return 0;}
double RSAS(double p , double q){//rsa ENCRYPTION func
n=p*q;//n value
fi=(p-1)*(q-1);//Toitent n value
printf("n degeri : %0.f\n",n);
printf("\n                     ___");
printf("\nToitent(n),Fi Degeri:(|)[n]=%0.f\n-----------------------------------------------------------",fi);
printf("\n1 < e < %0.f Olacak Sekilde ve %0.f ile aralarinda asal durumda 'e' degeri Giriniz: ",fi,fi);
printf("\nAyrica OBEB'in 1 olduguna emin olunuz.'\n");//it must be prime numbers
printf("\n'e'==>");//input e value
scanf_s("%f",&e);
//|||||||||||||||||||||||||||||||||||||||||
if (fi < e)                             //|
    modulo = fi;                        //|
else                                    //|
	modulo = e;                           //|this part our gcd
for (i = 2; i <= modulo; i++) {         //|
if (fmod(fi,i)== 0 && fmod(e,i)== 0)    //|
{goster = i;}}                          //|
//|||||||||||||||||||||||||||||||||||||||||

//****************************************
e=fmod(e,fi);                          //*
for(x=1;x<fi;x++)                      //*
{if(fmod((e*x),fi)==1)                 //*Modular Inverses
{d=x;}}                                //*
return 1;}                             //*
//****************************************
