/* Contoh program lingkaran */
#include <stdio.h>
main()
{
    int jari;
    float luas,keliling;
    printf ("Masukan nilai jari-jari: "); scanf("%d",&jari);
    luas=3.141593*jari*jari;
    keliling=2*3.141593*jari;

    printf ("Nilai luas lingkaran adalah: %f\n",luas);
    printf ("Nilai keliling lingkaran adalah: %f\n",keliling);
}
