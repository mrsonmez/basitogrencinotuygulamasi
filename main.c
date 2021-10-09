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
printf("Hoşgeldiniz \n");
printf("\n");
printf("Yapılabilecek İşlemler:\n \n 1.Öğrenci sayısı belirleme \n \n 2.Öğrenci adı girme\n \n 3.Öğrenci notu girme\n \n 4.Öğrencilerin not ortalaması \n \n 0.Programdan çıkış \n \n");

while(yapilacakislem>=1)
{
printf("Lütfen yapılacak işlemi seçiniz = ");
scanf("%d",&yapilacakislem);
printf("\n");

switch(yapilacakislem)
{
case 1:
printf("Öğrenci Sayısını Giriniz = ");
scanf("%d",&ogrenciSayisi);
printf("\n");
break;
case 2:
for(i = 0;ogrenciSayisi>i;i++)
{
printf("%d.Öğrenci adını yazınız = ",i+1);
scanf("%s",olistesi[i]);
printf("\n");
}
printf("\n");
break;
case 3:
for (a = 0;ogrenciSayisi>a;a++){
printf("%s isimli öğrencinin notunu giriniz = ",olistesi[a]);
scanf("%d",&notListesi[a]);
printf("\n");
toplam += notListesi[a];

}
printf("\n");
break;
case 4:
ortalama = toplam / ogrenciSayisi;
printf("%d adet öğrencinin %d Toplam notunun Öğrenci Ortalaması = %d \n ",ogrenciSayisi,toplam,ortalama);
break;
default:
if(yapilacakislem==0){

printf("İyi günler.");

}
else{
printf("Hatalı Tuşlama yaptınız.");
}
}

}
return 0;
}
