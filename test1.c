#include <stdio.h>
#include <stdlib.h>

int main(){
    int y,m,d,sum=0,times=0,w,i=0;
    int monthday[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int x[50];
    char test;
    scanf("%d/%d/%d",&y,&m,&d);
    do{
        scanf(" %d",&x[i++]);
    }while((test=getchar())!='\n');
    for(int j=0;j<i;j++){
        sum+=x[j];
        times++;
    }
    w=sum/times;
    int date=d+w;
    do{
        if(m==2){
            if((y%4==0&&y%100!=0)||y%400==0){
                monthday[1]=29;
            }
            else
                monthday[1]=28;
        }
        if(date>monthday[m-1]){
            date-=monthday[m-1];
            m++;
            if(m==13){
                y++;
                m=1;
            }
        }
    }while(date>monthday[m-1]);
    d=date;
    if(m<10&&d<10)
        printf("%d/0%d/0%d\n",y,m,d);
    else if(m<10)
        printf("%d/0%d/%d\n",y,m,d);
    else if(d<10)
        printf("%d/%d/0%d\n",y,m,d);
    else 
        printf("%d/%d/%d\n",y,m,d);
return 0;
}

    