#include <stdio.h>
#include <stdlib.h>

int tasowanie(int kw[52],int kolory[52])
{
    int k1,k2,temp,temp2;

    for(int i=0;i<2704;i++)
    {
        k1=rand()%52;
        k2=rand()%52;
        temp = kw[k2];
        temp2 = kolory[k2];
        kw[k2] = kw[k1];
        kw[k1] = temp;
        kolory[k2] = kolory[k1];
        kolory[k1] = temp2;
    }

    return 0;
}

int wtasowanie(int k1[13],int k2[13],int k3[13],int k4[13], int k5[52], int kolory[52])
{
    for(int i=0;i<13;i++)
    {
        k5[i]=k1[i];
        k5[i+13]=k2[i];
        k5[i+26]=k3[i];
        k5[i+39]=k4[i];
        kolory[i]=20;
        kolory[i+13]=21;
        kolory[i+26]=22;
        kolory[i+39]=23;
    }

    return 0;
}

int main()
{
    srand(time(NULL));
    int karty_karo[13]= {1,2,3,4,5,6,7,8,9,10,11,12,13};
    int karty_trefl[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    int karty_pik[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    int karty_kier[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    int karty_wszystkie[52];
    int kolory[52];

    wtasowanie(karty_karo,karty_trefl,karty_pik,karty_kier,karty_wszystkie,kolory);

    printf("    KARTY PRZED TASOWANIEM: \n\n");

    for(int i = 0; i<52; i++)
    {
        if(karty_wszystkie[i]==1)
        {
            if(kolory[i]==20)
                printf("\tKarta[%d] = AS karo\n",i+1);
            else if(kolory[i]==21)
                printf("\tKarta[%d] = AS trefl\n",i+1);
            else if(kolory[i]==22)
                printf("\tKarta[%d] = AS pik\n",i+1);
            else if(kolory[i]==23)
                printf("\tKarta[%d] = AS kier\n",i+1);
        }
        else if(karty_wszystkie[i]==11)
            {
              if(kolory[i]==20)
                printf("\tKarta[%d] = WALET karo\n",i+1);
            else if(kolory[i]==21)
                printf("\tKarta[%d] = WALET trefl\n",i+1);
            else if(kolory[i]==22)
                printf("\tKarta[%d] = WALET pik\n",i+1);
            else if(kolory[i]==23)
                printf("\tKarta[%d] = WALET kier\n",i+1);
            }
        else if(karty_wszystkie[i]==12)
        {
          if(kolory[i]==20)
                printf("\tKarta[%d] = DAMA karo\n",i+1);
            else if(kolory[i]==21)
                printf("\tKarta[%d] = DAMA trefl\n",i+1);
            else if(kolory[i]==22)
                printf("\tKarta[%d] = DAMA pik\n",i+1);
            else if(kolory[i]==23)
                printf("\tKarta[%d] = DAMA kier\n",i+1);
        }
        else if(karty_wszystkie[i]==13) {
       if(kolory[i]==20)
                printf("\tKarta[%d] = KROL karo\n",i+1);
            else if(kolory[i]==21)
                printf("\tKarta[%d] = KROL trefl\n",i+1);
            else if(kolory[i]==22)
                printf("\tKarta[%d] = KROL pik\n",i+1);
            else if(kolory[i]==23)
                printf("\tKarta[%d] = KROL kier\n",i+1);
        }
        else
        {
          if(kolory[i]==20)
                printf("\tKarta[%d] = %d karo\n",i+1, karty_wszystkie[i]);
            else if(kolory[i]==21)
                printf("\tKarta[%d] = %d trefl\n",i+1, karty_wszystkie[i]);
            else if(kolory[i]==22)
                printf("\tKarta[%d] = %d pik\n",i+1, karty_wszystkie[i]);
            else if(kolory[i]==23)
                printf("\tKarta[%d] = %d kier\n",i+1, karty_wszystkie[i]);
        }
    }

    tasowanie(karty_wszystkie,kolory);

    printf("\n    KARTY PO TASOWANIU: \n\n");


    for(int i = 0; i<52; i++)
    {
        if(karty_wszystkie[i]==1)
        {
            if(kolory[i]==20)
                printf("\tKarta[%d] = AS karo\n",i+1);
            else if(kolory[i]==21)
                printf("\tKarta[%d] = AS trefl\n",i+1);
            else if(kolory[i]==22)
                printf("\tKarta[%d] = AS pik\n",i+1);
            else if(kolory[i]==23)
                printf("\tKarta[%d] = AS kier\n",i+1);
        }
        else if(karty_wszystkie[i]==11)
            {
              if(kolory[i]==20)
                printf("\tKarta[%d] = WALET karo\n",i+1);
            else if(kolory[i]==21)
                printf("\tKarta[%d] = WALET trefl\n",i+1);
            else if(kolory[i]==22)
                printf("\tKarta[%d] = WALET pik\n",i+1);
            else if(kolory[i]==23)
                printf("\tKarta[%d] = WALET kier\n",i+1);
            }
        else if(karty_wszystkie[i]==12)
        {
          if(kolory[i]==20)
                printf("\tKarta[%d] = DAMA karo\n",i+1);
            else if(kolory[i]==21)
                printf("\tKarta[%d] = DAMA trefl\n",i+1);
            else if(kolory[i]==22)
                printf("\tKarta[%d] = DAMA pik\n",i+1);
            else if(kolory[i]==23)
                printf("\tKarta[%d] = DAMA kier\n",i+1);
        }
        else if(karty_wszystkie[i]==13) {
       if(kolory[i]==20)
                printf("\tKarta[%d] = KROL karo\n",i+1);
            else if(kolory[i]==21)
                printf("\tKarta[%d] = KROL trefl\n",i+1);
            else if(kolory[i]==22)
                printf("\tKarta[%d] = KROL pik\n",i+1);
            else if(kolory[i]==23)
                printf("\tKarta[%d] = KROL kier\n",i+1);
        }
        else
        {
          if(kolory[i]==20)
                printf("\tKarta[%d] = %d karo\n",i+1, karty_wszystkie[i]);
            else if(kolory[i]==21)
                printf("\tKarta[%d] = %d trefl\n",i+1, karty_wszystkie[i]);
            else if(kolory[i]==22)
                printf("\tKarta[%d] = %d pik\n",i+1, karty_wszystkie[i]);
            else if(kolory[i]==23)
                printf("\tKarta[%d] = %d kier\n",i+1, karty_wszystkie[i]);
        }
    }

    return 0;
          }
