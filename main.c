#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(int argc, char **argv)
{
setlocale(LC_ALL,"Turkish");

int ogrenciSayisi;
int i,a;
int yapilacakislem;
int toplam = 0;
int ortalama = 0;
int notListesi[100];
char olistesi[100][100];
printf("Hoþgeldiniz \n");
printf("\n");
printf("Yapýlabilecek Ýþlemler:\n \n 1.Öðrenci sayýsý belirleme \n \n 2.Öðrenci adý girme\n \n 3.Öðrenci notu girme\n \n 4.Öðrencilerin not ortalamasý \n \n 0.Programdan çýkýþ \n \n");

while(yapilacakislem>=1)
{
printf("Lütfen yapýlacak iþlemi seçiniz = ");
scanf("%d",&yapilacakislem);
printf("\n");

switch(yapilacakislem)
{
case 1:
printf("Öðrenci Sayýsýný Giriniz = ");
scanf("%d",&ogrenciSayisi);
printf("\n");
break;
case 2:
for(i = 0;ogrenciSayisi>i;i++)
{
printf("%d.Öðrenci adýný yazýnýz = ",i+1);
scanf("%s",olistesi[i]);
printf("\n");
}
printf("\n");
break;
case 3:
for (a = 0;ogrenciSayisi>a;a++){
printf("%s isimli öðrencinin notunu giriniz = ",olistesi[a]);
scanf("%d",&notListesi[a]);
printf("\n");
toplam += notListesi[a];

}
printf("\n");
break;
case 4:
ortalama = toplam / ogrenciSayisi;
printf("%d adet öðrencinin %d Toplam notunun Öðrenci Ortalamasý = %d \n ",ogrenciSayisi,toplam,ortalama);
break;
default:
if(yapilacakislem==0){

printf("Ýyi günler.");

}
else{
printf("Hatalý Tuþlama yaptýnýz.");
}
}

}
return 0;
//Soner SÖNMEZ 202104010 02.12.2020/22.09
}
