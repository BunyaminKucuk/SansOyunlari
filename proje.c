#include<stdio.h>
#include <string.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

void siralama(int dizi[],int boyut)
{
    int i,j;
    int takas;
    for(i=0;i<boyut-1;i++)
    {
        for(j=0;j<boyut-1;j++)
        {
            if(dizi[j]>dizi[j+1])
            {
            takas=dizi[j];
            dizi[j]=dizi[j+1];
            dizi[j+1]=takas;
            }
        }
    }
}
void degistir(int dizi[],int boyut)
{
    int i,j;
    for(i=0;i<boyut;i++)
    {
        for(j=0;j<boyut;j++)
        {
            if(dizi[j]==dizi[j+1])
            {
                dizi[j]=1+rand()%34;

            }
        }
    }
}





int main()
{
   char c[1000];
   int alt_menu_1=0;
   int sayac=0;
   int sayisal_bil[6];
   int j;
   int sans;
   int i=0;
   int dizi[6];
   int s_secim;
   int k_sayi;
   int cikis;
   int cekilis=0;
   ana_menu:



   printf("1.Sans Oyunlari");
   printf("\n");
   printf("2.Cekilis Istatistikleri");
   printf("\n");
   printf("3.Cikis");
   printf("\n");
   printf("Lutfen Bir Menu Seciniz:"); scanf("%d",&k_sayi);
   alt_menu:


   if(k_sayi<4 && k_sayi>0)
{
       if(k_sayi==1)
   {

       printf("*******Sans Oyunlari Alt Menusu*******\n");
       printf("1.Sayisal Loto Oynama\n");
       printf("2.Sans Topu Oynama\n");
       printf("3.On Numara Oynama\n");
       printf("4. Super Loto Oynma\n");
       printf("5.Ana MeNu\n");
       printf("lutfen girmek isteginiz oyunu secin:"); scanf("%d",&s_secim);
       if(s_secim<6 && s_secim>0)
    {

       Sayisal_loto:
           system("CLS");
       if(s_secim==1)
       {

           printf("**********Sayisal Loto**********\n");
           printf("Lutfen 1 ile 49 arasi 6 sayi giriniz.\n");
           for(i=0;i<6;i++)
           {
               printf("%d.sayi=",i+1); scanf("%d",&sans);

                   dizi[i]=sans;
           }

           for(i=0;i<6;i++)
           {

             siralama(dizi,6);


           }
           for(i=0;i<6;i++)
           {
               printf("%d\t",dizi[i]);
           }
           printf("\n");





            srand(time(NULL));
            for(i=0;i<6;i++)
             {
                sayisal_bil[i]=1+rand()%50;
             }
             siralama(sayisal_bil,6);
             degistir(sayisal_bil,6);
             printf("*****Bilgisayar sayilari*****\n");
             for(i=0;i<6;i++)
           {
            printf("%d\t",sayisal_bil[i]);
           }

           FILE *Sayisal_loto=NULL;
             Sayisal_loto= fopen("Sayisal Loto Oyunu.txt","a");

            if(Sayisal_loto!=NULL)
            {
                for(i=0;i<6;i++)
                {

                    fprintf(Sayisal_loto,"%d\t",sayisal_bil[i]);


                }

                fprintf(Sayisal_loto,"\n");

            }
            else
            {
                printf("Dosya bulunamadý.");
            }

            fclose(Sayisal_loto);

           for(i=0;i<6;i++)
           {
               for(j=0;j<6;j++)
               {
                   if(dizi[i]==sayisal_bil[j])
                   {
                       sayac=sayac+1;
                   }
               }
               printf("\n");

           }

           if(0<sayac)
           {
               printf("Tutrudunuz sayi=%d\n",sayac);
           }
           else
           {
               printf("hic sayi tuturamadiniz\n");
           }


           if(sayac==3)
           {
              printf("Toplam puan=32");
           }
           else if(sayac==4)
           {
               printf("Toplam puan=64");
           }

           else if(sayac==5)
           {
               printf("Toplam puan=128");
           }
           else if(sayac==6)
           {
               printf("Toplam puan=256");
           }
           else
           {
               printf("Belirtilen araliklarda sayi tuturamamdiniz.**3 ile 6 araliginda**\n");

           }

              int a=32,c=128,b=64,d=256,e=0;

               FILE *Sayisal_loto_puan=NULL;
             Sayisal_loto_puan= fopen("Sayisal Loto puan Oyunu.txt","a");

            if(Sayisal_loto_puan!=NULL)
            {

            if(sayac==3)
           {
              fprintf(Sayisal_loto_puan,"Toplam puan=%d",a);
           }
           else if(sayac==4)
           {
               fprintf(Sayisal_loto_puan,"Toplam puan=%d",b);
           }

           else if(sayac==5)
           {
               fprintf(Sayisal_loto_puan,"Toplam puan=%d",c);
           }
           else if(sayac==6)
           {
               fprintf(Sayisal_loto_puan,"Toplam puan=%d",d);
           }
           else
           {
               fprintf(Sayisal_loto_puan,"Toplam puan=%d",e);

           }

                fprintf(Sayisal_loto_puan,"\n");

            }
            else
            {
                printf("Dosya bulunamadý.");
            }
            fclose(Sayisal_loto_puan);
           printf("Tekrar Sayisal Loto oynamak istorsaniz 1 e cikmak istiyorsaniz herhangi bir sayiya basiniz."); scanf("%d",&alt_menu_1);
           if(alt_menu_1==1)
           {
               goto Sayisal_loto;
           }
           else
           {
               goto alt_menu;
           }


        }




       if(s_secim==2)
        {
        sans_oyunu:
            system("CLS");

             int i,sayac=0,dizi[5],sans,sayisal_bil[5],j;
   int sayi1=0,sonuc=0;
   printf("SANS OYUNUNA HOS GELDNIZ\n\n");
   printf("1 ile 34 arasinda bes sayi giriniz\n");


   for(i=0;i<5; i++)

   {   printf("%d.sayi=",i+1);
       scanf("%d",&sans);
    dizi[i]= sans;
   }
for(i=0; i<5; i++)
{
     siralama(dizi,5);
}
for(i=0; i<5; i++)
{
    printf("%d\n" ,dizi[i]);
}




   srand(time(NULL));
            for(i=0;i<5;i++)
             {
                sayisal_bil[i]=1+rand()%34;
             }
             for(i=0;i<5;i++)
             {
             siralama(sayisal_bil,5);
             degistir(sayisal_bil,5);
             }


             printf("Bilgisayar sayilari\n");
              for(i=0;i<5;i++)
           {
            printf("%d\t",sayisal_bil[i]);

           }
           for(i=0;i<5;i++)



               printf("\n");

   printf("1 ile 14 arasinda bir sayi giriniz\n");
   scanf("%d" ,&sayi1);
   srand(time(NULL));

sayi1=1+rand()%14;
FILE *sans_oyunu=NULL;
             sans_oyunu= fopen("Sans  Oyunu.txt","a");

            if(sans_oyunu!=NULL)
            {
                for(i=0;i<6;i++)
                {

                    fprintf(sans_oyunu,"%d\t",sayisal_bil[i]);


                }

                fprintf(sans_oyunu,"\n");

            }
            else
            {
                printf("Dosya bulunamadý.");
            }

            fclose(sans_oyunu);




printf("\n%d\n",sayi1);
for (i=0; i<5; i++)
{
    for(j=0; j<5; j++)
    {
        if(dizi[i]==sayisal_bil[j])
        {
            sayac=sayac+1;
        }
    }
}
if(sayi1==sayisal_bil)
{
    sonuc=sonuc+1;
}
if(0<sayac)
           {
               printf("Tutrudunuz sayi=%d\n",sayac);
           }
           else
           {
               printf("hic sayi tuturamadiniz\n");
           }



    if(sayac==1 && sonuc==1)
    {
        printf("toplam puaniniz=2\n");

    }
    else if(sayac==2 &&sonuc==1)
    {
        printf("toplam puaniniz=4\n");
        }
        else if(sayac==3 && sonuc==1)
        {
            printf("toplam puaniniz=16\n");
        }
        else if(sayac==3 )
        {
            printf("toplam puanini=8\n");
        }
        else if(sayac==14 && sonuc==1)
        {
            printf("toplam puaniniz=64\n");
        }
        else if(sayac==4)
        {
            printf("toplam puaniniz=32\n");
        }
        else if(sayac==5 && sonuc==1)
        {
            printf("toplam puaniniz=256\n");

        }
        else if(sayac==5)
        {
            printf("toplam puaniniz=128\n");
        }
        else
        {
            printf("*puan kazanamadiniz*\n");
        }
        int a=2,b=4,c=8,d=16,e=32,f=64,g=128,h=256,k=0;
        FILE*sans_oyun_puan=NULL;
        sans_oyun_puan=fopen("sans topu puan oyun.txt","a");
        if(sans_oyun_puan!=NULL)
        {


            if(sayac==1 && sonuc==1)
    {
        fprintf(sans_oyun_puan,"Toplam puan=%d\n" ,a);

    }
    else if(sayac==2 &&sonuc==1)
    {
        fprintf(sans_oyun_puan,"Toplam puan=%d\n",b);
        }
        else if(sayac==3 && sonuc==1)
        {
            fprintf(sans_oyun_puan, "Toplam puan=%d\n" ,c);
        }
        else if(sayac==3 )
        {
            fprintf(sans_oyun_puan ,"Toplam puan=%d\n" ,d);
        }
        else if(sayac==14 && sonuc==1)
        {
            fprintf(sans_oyun_puan, "Toplam puan=%d\n" ,e);
        }
        else if(sayac==4)
        {
            fprintf(sans_oyun_puan, "Toplam puan=%d\n" ,f);
        }
        else if(sayac==5 && sonuc==1)
        {
            fprintf(sans_oyun_puan ,"Toplam puan=%d\n" ,g);

        }
        else if(sayac==5)
        {
            fprintf(sans_oyun_puan ,"Toplam puan=%d\n" ,h);
        }
else{
    fprintf(sans_oyun_puan, "Toplam puan=%d\n" ,k);
}
  fprintf(sans_oyun_puan,"\n");
        }
        else{
            printf("Dosya bulunamadi.");
        }
        fclose(sans_oyun_puan);
        printf("Tekrar Sans oyunu oynamak istorsaniz 1 e cikmak istiyorsaniz herhangi bir sayiya basiniz."); scanf("%d",&alt_menu_1);
           if(alt_menu_1==1)
           {
               goto sans_oyunu;
           }
           else
           {
               goto alt_menu;
           }

       }

       if(s_secim==3)
        {
        ON_nUMARA:
            system("CLS");

           int i,dizi[10],sans,sayisal_bil3[22],j;
   int sayac=0;

   printf("*ON NUMARA  OYUNUNA HOS GELDNIZ*\n\n");
   printf("1 ile 80 arasinda on farkli sayi giriniz\n");


   for(i=0;i<10; i++)

   {   printf("%d.sayi=",i+1);
       scanf("%d",&sans);
    dizi[i]= sans;
   }
   printf("\n");
for(i=0; i<10; i++)
{
     siralama(dizi,10);
}
for(i=0; i<10; i++)
{
    printf("%d\t" ,dizi[i]);
}
printf("\n");




 srand(time(NULL));
            for(i=0;i<22;i++)
             {
                sayisal_bil3[i]=1+rand()%81;
             }
             for(i=0;i<22;i++)
             {
                 siralama(sayisal_bil3,22);
                 degistir(sayisal_bil3,22);
             }



               FILE *On_numara=NULL;
             On_numara= fopen("On Numara Oyunu.txt","a");

            if(On_numara!=NULL)
            {
                for(i=0;i<22;i++)
                {

                    fprintf(On_numara,"%d\t",sayisal_bil3[i]);


                }

                fprintf(On_numara,"\n");

            }
            else
            {
                printf("Dosya bulunamadý.");
            }

            fclose(On_numara);




             printf("*Bilgisayar sayilari*\n");
              for(i=0;i<22;i++)
           {
            printf("%d\t",sayisal_bil3[i]);

           }
           for(i=0;i<22;i++)

        printf("\n");

for (i=0; i<10; i++)
{
    for(j=0; j<22; j++)
    {
        if(dizi[i]==sayisal_bil3[j])
        {
            sayac=sayac+1;
        }
    }
}
if(0<sayac)
           {
               printf("Tutrudunuz sayi=%d\n",sayac);
           }
           else
           {
               printf("hic sayi tuturamadiniz\n");
           }


 if(sayac==0)
 {
     printf("hicbir sayiyi bilemediniz ama kazandiginiz puan=8\n");
 }
 else if(sayac==6)
 {
     printf("6 sayi bildiniz ve  kazandiginiz puan=16\n");
 }
 else if(sayac==7)
 {
     printf("7 sayi bildiniz ve kazandiginiz puan=32\n");
 }
 else if(sayac==8)
 {
     printf("8 sayi bildiniz ve kazandiginiz puan=64\n");
 }
 else if(sayac==9)
{
    printf("9 sayi bildiniz ve kazandiginiz puan=128\n");

}
else if(sayac==10)
{
    printf("tebrikler 10 sayi bildinz ve kazandiginiz puan=256\n");
}
else
    {
    printf("*uzgunuz bir sey kazanamadiniz*\n");

}
int a=8,b=16,c=32,d=64,e=128,f=256,g=0;
FILE*on_numara_puan=NULL;
on_numara_puan=fopen("on_numara_puan oyunu.txt","a");
if(on_numara_puan!=NULL)
{  if(sayac==0)
 {
     fprintf(on_numara_puan,"Toplam puan=%d\n" ,a);
 }
 else if(sayac==6)
 {
     fprintf(on_numara_puan,"Toplam puan=%d\n" ,b);
 }
 else if(sayac==7)
 {
     fprintf(on_numara_puan,"Toplam puan=%d\n" ,c);
 }
 else if(sayac==8)
 {
     fprintf(on_numara_puan,"Toplam puan=%d\n" ,d);
 }
 else if(sayac==9)
{
    fprintf(on_numara_puan,"Toplam puan=%d\n" ,e);

}
else if(sayac==10)
{
    fprintf(on_numara_puan,"Toplam puan=%d\n" ,f);
}
else
    {
    fprintf(on_numara_puan,"Toplam puan=%d\n" ,g);

}
  fprintf(on_numara_puan ,"\n");
 }
 else {
    printf("Dosya bulunamadi.");
 }
 fclose(on_numara_puan);


printf("Tekrar On Numara oynamak istorsaniz 1 e cikmak istiyorsaniz herhangi bir sayiya basiniz."); scanf("%d",&alt_menu_1);
           if(alt_menu_1==1)
           {
               goto ON_nUMARA;
           }
           else
           {
               goto alt_menu;
           }








       }
       if(s_secim==4)

       {
           Super_loto:
               system("CLS");
           printf("**********Super  Loto**********\n");
           printf("Lutfen 1 ile 54 arasi 6 sayi giriniz.\n");
           for(i=0;i<6;i++)
           {
               printf("%d.sayi=",i+1); scanf("%d",&sans);

                   dizi[i]=sans;
           }

           for(i=0;i<6;i++)
           {

             siralama(dizi,6);


           }
           for(i=0;i<6;i++)
           {
               printf("%d\t",dizi[i]);
           }
           printf("\n");





            srand(time(NULL));
            for(i=0;i<6;i++)
             {
                sayisal_bil[i]=1+rand()%55;
             }
             siralama(sayisal_bil,6);
             degistir(sayisal_bil,6);
             printf("*****Bilgisayar sayilari*****\n");
             for(i=0;i<6;i++)
           {
            printf("%d\t",sayisal_bil[i]);
           }

           FILE *Super_loto=NULL;
             Super_loto= fopen("Super Loto Oyunu.txt","a");

            if(Super_loto!=NULL)
            {
                for(i=0;i<6;i++)
                {

                    fprintf(Super_loto,"%d\t",sayisal_bil[i]);


                }

                fprintf(Super_loto,"\n");

            }
            else
            {
                printf("Dosya bulunamadý.");
            }

            fclose(Super_loto);

           for(i=0;i<6;i++)
           {
               for(j=0;j<6;j++)
               {
                   if(dizi[i]==sayisal_bil[j])
                   {
                       sayac=sayac+1;
                   }
               }
               printf("\n");

           }
           if(0<sayac)
           {
               printf("Tutrudunuz sayi=%d\n",sayac);
           }
           else
           {
               printf("hic sayi tuturamadiniz\n");
           }


           if(sayac==3)
           {
              printf("Toplam puan=32");
           }
           else if(sayac==4)
           {
               printf("Toplam puan=64");
           }

           else if(sayac==5)
           {
               printf("Toplam puan=128");
           }
           else if(sayac==6)
           {
               printf("Toplam puan=256");
           }
           else
           {
               printf("Belirtilen araliklarda sayi tuturamamdiniz.**3 ile 6 araliginda**\n");

           }
           int a=32,b=64,c=128,d=256,e=0;
           FILE*super_loto_puan=NULL;
           super_loto_puan=fopen("super loto puan oyunu.txt" ,"a");
           if(super_loto_puan!=NULL)
           {
                if(sayac==3)
           {
              fprintf(super_loto_puan , "Toplam puan=%d", a);
           }
           else if(sayac==4)
           {
               fprintf(super_loto_puan , "Toplam puan=%d",b);
           }

           else if(sayac==5)
           {
               fprintf(super_loto_puan , "Toplam puan=%d",c);
           }
           else if(sayac==6)
           {
               fprintf(super_loto_puan , "Toplam puan=%d",d);
           }
           else
           {
               fprintf(super_loto_puan , "Toplam puan=%d",e);

           }
           fprintf(super_loto_puan, "\n");
           }
           else{
                printf("Dosya bulunumadi.");

           }
           fclose(super_loto_puan);


            printf("Tekrar Sayisal Loto oynamak istorsaniz 1 e cikmak istiyorsaniz herhangi bir sayiya basiniz."); scanf("%d",&alt_menu_1);
           if(alt_menu_1==1)
           {
               goto Super_loto;
           }
           else
           {
               goto alt_menu;
           }

       }
       if(s_secim==5)
       {

           goto ana_menu;
       }

}



   else
   {
       printf("\n");
       printf("Lutfen 1 ile 5 arasinda secim yapiniz!!!\n");
       goto alt_menu;
   }
   }



  if(k_sayi==2)
  {
      int k=0;
      cekilis_is:
      printf("************Cekilis Istatistikleri***********\n");
      printf("Hangi oyunun Istatistigini Gormek Istersiniz?\n");
      printf("1.Sayisal Loto \n");
      printf("2.Sans Topu \n");
      printf("3.On Numara \n");
      printf("4. Super Loto \n");
      printf("5.Ana MeNu\n");
      printf("lutfen girmek isteginiz oyunu secin:"); scanf("%d",&cekilis);
       if(cekilis==1)
      {
          printf("*****Sayisal Loto En Sansli 6'li*****");


          FILE *fptr;
          fptr=fopen("Sayisal Loto Oyunu.txt","r");
          fscanf(fptr,"%[^\n]",c);
          printf("\n%s",c);
          fclose(fptr);
      }
      else if (cekilis==2)
      {
          printf("***********Sans Topu En Sansli 6'li********");

   FILE *fptr;
   fptr=fopen("Sans  Oyunu.txt","r");
   fscanf(fptr,"%[^\n]",c);
   printf("\n%s",c);
   fclose(fptr);

      }
      else if(cekilis==3)
      {
           printf("****On Numara Oyunu En Sansli 22'li*****");

           FILE *fptr;
           fptr=fopen("On Numara Oyunu.txt","r");
           fscanf(fptr,"%[^\n]",c);
           printf("\n%s",c);
           fclose(fptr);


      }
      else if(cekilis==4)
      {
          printf("******Super Loto En Sansli 6'li*******");

           FILE *fptr;
           fptr=fopen("Super Loto Oyunu.txt","r");
           fscanf(fptr,"%[^\n]",c);
           printf("\n%s",c);
           fclose(fptr);

      }
      else if(cekilis==5)
      {
          goto ana_menu;

      }



      else
      {
          printf("lutfen 1 ile 5 arasi secim yapiniz\n");
          goto cekilis_is;
      }
}
  if(k_sayi==3)
  {
      printf("********Cikis******\n");
      printf("Cikis yapmak istediginizden eminseniz lutfen '1' e basiniz. 'E/e/H/h'"); scanf("%d",&cikis);
      if(cikis==1)
      {

        printf("Programimizdan cikis yaptiniz kapatmak icin herhangi bir tusa basin.");

      }
      else
      {
          goto ana_menu;
      }
  }


 }

   else
   {
       printf("Lutfen 1 ile 3 arasinda secim yapiniz!!!\n");
       goto ana_menu;
   }

}
