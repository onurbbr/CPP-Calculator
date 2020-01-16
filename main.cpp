#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <zconf.h>

#define pi 3.141592653

    int main() {
        setlocale(LC_ALL, "Turkish");
        float x;
        int kaydet = 0, secenek, secenek2, secenek3, toplama = 0, cikartma = 0, carpma = 0;
        int bolme = 0, modalma = 0, kuvvetalma = 0, kokalma = 0, sayi1 = 0, sayi2 = 0, sonuc;
        int i, faktoriyel = 1;
	system("clear");
        printf("Hoşgeldiniz!\n");
        printf("Lütfen işlem yapacağınız 1. sayınızı giriniz: ");
        yeniislem:
        scanf("%d", &sayi1);
        hataliislem:
        kaydedilenislem:
        printf("Yapmak istediğiniz işlemler aşağıda sıralanacaktır.\n\n");
        printf("1- Toplama\n");
        printf("2- Çıkartma\n");
        printf("3- Çarpma\n");
        printf("4- Bölme\n");
        printf("5- Mod Alma\n");
        printf("6- n. dereceden kuvvetini alma\n");
        printf("7- Girilen sayının Karekök değerini alma\n");
        printf("8- Girilen sayının Küpkök değerini alma\n");
        printf("9- Girilen sayının Sinüs değerini alma\n");
        printf("10- Girilen sayının Kosinüs değerini alma\n");
        printf("11- Girilen sayının Tanjant değerini alma\n");
        printf("12- Girilen sayının Kotanjant değerini alma\n");
        printf("13- Girilen sayının Faktöriyel değerini alma\n");
        printf("14- İşlemi iptal etme\n\n");
        printf("Yapacağınız işlemi 1-7 sayı aralığında lütfen yazınız: ");
        scanf("%d", &secenek);
        if (secenek == 1) {
            printf("Lütfen 2. sayınızı giriniz: ");
            scanf("%d", &sayi2);
            toplama += sayi1 + sayi2;
            printf("İşlemin sonucu = %d\n", toplama);
            kaydet = toplama;
        } else if (secenek == 2) {
            printf("Lütfen 2. sayınızı giriniz: ");
            scanf("%d", &sayi2);
            cikartma += sayi1 - sayi2;
            printf("İşlemin sonucu = %d\n", cikartma);
            kaydet = cikartma;
        } else if (secenek == 3) {
            printf("Lütfen 2. sayınızı giriniz: ");
            scanf("%d", &sayi2);
            carpma += sayi1 * sayi2;
            printf("İşlemin sonucu = %d\n", carpma);
            kaydet = carpma;
        } else if (secenek == 4) {
            printf("Lütfen 2. sayınızı giriniz: ");
            scanf("%d", &sayi2);
            bolme += sayi1 / sayi2;
            printf("İşlemin sonucu = %d\n", bolme);
            kaydet = bolme;
        } else if (secenek == 5) {
            printf("Lütfen 2. sayınızı giriniz: ");
            scanf("%d", &sayi2);
            modalma += sayi1 % sayi2;
            printf("İşlemin sonucu = %d\n", modalma);
            kaydet = modalma;
        } else if (secenek == 6) {
            int sonuc1 = 1;
            printf("Alınacak üs değerini giriniz: ");
            scanf("%d", &sayi2);
            for (i = 0; i < sayi2; i++) {
                sonuc1 = sonuc1 * sayi1; //Bu işlemin kısası sonuc *= sayi;
            }
            printf("Sonuc= %d\n", sonuc1);
        } else if (secenek == 7) {
            int karekok = 0;
            karekok += sayi1 * sayi1;
            printf("Karekök değeri = %d\n", karekok);
            kaydet = karekok;
        } else if (secenek == 8) {
            int kupkok = 0;
            kupkok += sayi1 * sayi1 * sayi1;
            printf("Küpkök değeri = %d\n", kupkok);
            kaydet = kupkok;
        } else if (secenek == 9) {
            x = sayi1 % 360;
            printf("Sinüs %g = %f \n", x, sin(x * pi / 180));
        } else if (secenek == 10) {
            x = sayi1 % 360;
            printf("Kosinüs %g = %f \n", x, sin(x * pi / 180));
        } else if (secenek == 11) {
            x = sayi1 % 360;
            printf("Tanjant %g = %f \n", x, sin(x * pi / 180) / cos(x * pi / 180));
        } else if (secenek == 12) {
            x = sayi1 % 360;
            printf("Kotanjant %g = %f \n", x, cos(x * pi / 180) / sin(x * pi / 180));
        } else if (secenek == 13) {
            for (i = 1; i <= sayi1; i++) {
                faktoriyel *= i;
            }
            printf("Faktöriyel değeri = %d\n", faktoriyel);
        } else if (secenek == 14) {
            printf("İşlem sonlandırılıyor...\n");
            goto a;
        } else {
            printf("Hatalı işlem yaptınız. Lütfen tekrar deneyiniz.");
            printf("Yapacağınız işlemi 1-7 sayı aralığında lütfen yazınız: ");
            goto hataliislem;
        }
        hataliislem3:
        printf("Çıkan sonuç ile işlem yapmak ister misiniz? Evet için 1, hayır için 0 tuşuna basınız\n");
        printf("NOT: Kaydetme işlemi sadece 4 işlem, mod, kök alma, kuvvet alma, karekök ve küpkök işlemlerinde geçerlidir...\n");
        printf("Lütfen seçiminizi yapınız:");
        scanf(" %d", &sonuc);
        if (sonuc == 1) {
            printf("Kaydedilen sonuç ile devam ediliyor...\n");
            system("clear");
            printf("Kaydedilen sonuç ile ");
            sayi1 = 0;
            sayi1 += kaydet;
            goto kaydedilenislem;
        } else if (sonuc == 0) {
            goto hataliislem2;
        } else {
            printf("Hatalı işlem seçtiniz. Lütfen seçiminizi tekrar yapınız.");
            goto hataliislem3;
        }
        hataliislem2:
        printf("Yeni bir işlem yapmak istiyor musunuz?\n");
        printf("Evet için 1, Hayır için 0 tuşuna basın: ");
        scanf("%d", &secenek2);
        if (secenek2 == 1) {
            printf("Yeni bir işlem yapmayı seçtiniz.\n");
            printf("Ekran Temizleniyor...");
            sleep(3);
            system("clear");
            printf("Lütfen işlem yapacağınız 1. sayınızı giriniz: ");
            int kaydet = 0;
            goto yeniislem;
        } else if (secenek2 == 0) {
            goto a;
        } else {
            printf("Hatalı işlem yaptınız. Lütfen tekrar deneyiniz.");
            goto hataliislem2;
        }
        a:
        printf("İşlem Tamamlandı.\n");
        printf("Ekran temizleniyor...\n");
        sleep(5);
        system("clear");
        return 0;
    }
