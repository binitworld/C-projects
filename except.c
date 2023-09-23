#include <stdio.h>
int distancekms(int a,int b);
int distancems(int a,int b);
int distancekmd(int a,int b);
int distancemd(int a,int b);
int main()
{
    int d1km,d1m,d2km,d2m,skm,sm,dkm,dm;
    printf("Enter distance 1 : ");
    scanf("%d %d",&d1km,&d1m);
    printf("Enter distance 2 : ");
    scanf("%d %d",&d2km,&d2m);
    skm = distancekms(d1km,d2km);
    sm  = distancems(d1m,d2m);
    dkm = distancekmd(d1km,d2km);
    dm  = distancemd(d1m,d2m);
    if (sm>1000){
        skm = skm + 1;
        sm = sm-1000;
    }
    if (dm<0){
        dkm=dkm-1;
        dm = 1000+dm;
    }
    printf("Sum : %d kilometer %d meters\n",skm,sm);
    printf("difference : %d kilometer %d meters",dkm,dm);
}
int distancekms(int a,int b){
    int sumkm;
    sumkm = a+b;
    return(sumkm);
}
int distancems(int a,int b){
    int summ;
    summ = a+b;
    return(summ);
}
int distancekmd(int a,int b){
    int difkm;
    difkm = a - b;
    return(difkm);
}
int distancemd(int a,int b){
    int difm;
    difm = a - b;
    return(difm);
}