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
printf("Ho�geldiniz \n");
printf("\n");
printf("Yap�labilecek ��lemler:\n \n 1.��renci say�s� belirleme \n \n 2.��renci ad� girme\n \n 3.��renci notu girme\n \n 4.��rencilerin not ortalamas� \n \n 0.Programdan ��k�� \n \n");

while(yapilacakislem>=1)
{
printf("L�tfen yap�lacak i�lemi se�iniz = ");
scanf("%d",&yapilacakislem);
printf("\n");

switch(yapilacakislem)
{
case 1:
printf("��renci Say�s�n� Giriniz = ");
scanf("%d",&ogrenciSayisi);
printf("\n");
break;
case 2:
for(i = 0;ogrenciSayisi>i;i++)
{
printf("%d.��renci ad�n� yaz�n�z = ",i+1);
scanf("%s",olistesi[i]);
printf("\n");
}
printf("\n");
break;
case 3:
for (a = 0;ogrenciSayisi>a;a++){
printf("%s isimli ��rencinin notunu giriniz = ",olistesi[a]);
scanf("%d",&notListesi[a]);
printf("\n");
toplam += notListesi[a];

}
printf("\n");
break;
case 4:
ortalama = toplam / ogrenciSayisi;
printf("%d adet ��rencinin %d Toplam notunun ��renci Ortalamas� = %d \n ",ogrenciSayisi,toplam,ortalama);
break;
default:
if(yapilacakislem==0){

printf("�yi g�nler.");

}
else{
printf("Hatal� Tu�lama yapt�n�z.");
}
}

}
return 0;
//Soner S�NMEZ 202104010 02.12.2020/22.09
}
