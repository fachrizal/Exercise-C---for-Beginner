/* Contoh program C++ persegi panjang */
#include <stdio.h>
main()
{
    int panjang,lebar,luas,keliling;
    printf ("Masukan panjang: "); scanf("%d",&panjang);
    printf ("Masukan lebar: "); scanf("%d",&lebar);
    luas=panjang*lebar;
    keliling=2*(panjang+lebar);
    printf ("Jadi luasnya adalah: %d\n",luas);
    printf ("Jadi kelilingnya adalah: %d\n",keliling);
}
