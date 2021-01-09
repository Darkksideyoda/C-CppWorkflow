#include<stdio.h>
#include<locale.h>
#define x_1 x_2 
#define y_1 y_2
void main()
{
	

	setlocale(LC_ALL,"Turkish");
	char t='x',l='y',z,r;
	int x,x_1,y,y_1,is_1,is_2,is3,is4,ana1,ana2,s,iki,i;
	do{
	
	printf("\nx1 Koordinatýnýn Deðerini Giriniz:");
	scanf("%d",&x);
	printf("\nx2 Koordinatýnýn Deðerini Giriniz:");
	scanf("%d",&x_1);
	printf("\ny1 Koordinatýnýn Deðerini Giriniz:");
	scanf("%d",&y);
	printf("\ny2 Koordinatýnýn Deðerini Giriniz:");
	scanf("%d",&y_1);
	is_1=y_1-y;//y2-y1
	is_2=x_1-x;//x2-x1
	is3=-1*y_1;//y-y2 
	is4=-1*x_1;//x-x2
	ana1=is_1*is4;//icler dýslar carpimi 1
	ana2=is3*is_2;//icler dýslar carpimi 2
	printf("\n(x,y)=(%d,%d)(%d,%d)",x,y,x_2,y_1);
	if(y_2==0)
	{
		/*
		burada içler dýþlar çarpýmýný char veri tipini iþleme 
		sokamayacaðýmýzdan ve sonucun hep 0 çýkmmasýný engellemek 
		için böyle bir iþlem yaptýk.
		*/
			
	
				ana2=is_2;//icler dýslar carpimi 2
	}
	

	if(x_2==0)
	{	

							ana1=is_1;//icler dýslar carpimi 1
		
	}
	
	
		if(is_1<0&&is_2<0)
		{
			
			printf("\n%d%c+%d=%d%c%d",is_1,t,ana1,is_2,l,ana2);
				is_1=(-1)*is_1;
				ana1=ana1*(-1);
				s=ana1+ana2;
				printf("\n%d%c%d%c%d=0 Kapalý Fromülünüz!",is_1,t,is_2,l,s);
				
			
					}	
		
				if(ana2>0){
			
					printf("\n%d%c=%d%c+%d",ana1,t,is_2,l,ana2);
					is_2=is_2*(-1);
					ana2=ana2*-1;
					if(is_2<0&&ana2<0){
					printf("\n%d%c+%d%c+%d=0 Kapalý Fromülünüz!",ana1*(-1),t,is_2*(-1),l,ana2*(-1));
				}else{
				
					printf("\n%d%c+%d%c%d=0 Kapalý Fromülünüz!",ana1,t,is_2,l,ana2);
				}
		}
		if(x_2>0&&y_2>0)
		{
				printf("\n%d%c+%d=%c%d",is_1,t,ana1,l,ana2);
				is_1=(-1)*is_1;
				ana1=ana1*(-1);
				s=ana1+ana2;				
				printf("\n%d%c+%c%d=0 Kapalý Fromülünüz!",is_1,t,l,s);
		}
			for(i=1;i<=2;i++){
				printf("\n*");
			}
			
			printf("\nTekrar Denemek Ýster misiniz ?E/H");
			scanf("%c",&r);
			fflush(stdin);
			r=getchar();
			for(i=1;i<=2;i++){
				printf("\n*");
			}
	}while(r=='E' || r=='e');
				
	getch();
	
}
