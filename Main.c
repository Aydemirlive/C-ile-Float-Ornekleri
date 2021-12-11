#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float sayi1=7/3;
    float sayi2=(float)(7/3);
    float sayi3=7/(float)3;
    float sayi4=(float)7/3;
    float sayi5=(float)7/(float)3;
    
    printf("%f\n",sayi1);
    printf("%f\n",sayi2);
    printf("%f\n",sayi3);
    printf("%f\n",sayi4);
    printf("%f\n",sayi5);
    
    double d1=5.3;
    double d2=5.4;
    double d3=5.5;
    
    int toplam1=(int)(d1+d2+d3);
    int toplam2=(int)d1+(int)d2+(int)d3;
    
    printf("%d\n",toplam1);
    printf("%d\n",toplam2);
    
  system("PAUSE");	
  return 0;
}
