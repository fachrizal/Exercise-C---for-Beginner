/* Contoh program balok */
#include <stdio.h>
main ()
{
    int lebar,panjang,tinggi,luas,volume;
    printf ("Masukan nilai panjang: "); scanf ("%d",&panjang);
    printf ("Masukan nilai tinggi: "); scanf ("%d",&tinggi);
    printf ("Masukan nilai lebar: "); scanf ("%d",&lebar);
    luas=(2*lebar*panjang)+(2*panjang*tinggi)+(2*lebar*tinggi);
    volume=panjang*lebar*tinggi;
    printf ("Nilai luas balok adalah: %d\n",luas);
    printf ("Nilai volume balok adalah: %d\n",volume);
}
