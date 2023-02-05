                                                                /*DIGITAL CLOCK*/
#include<stdio.h>
#include<conio.h>
#include<unistd.h>//sleep() function belongs
#include<stdlib.h>//system() belong

int main()
{int h,m,s;
int d=1000; //we add delay of 1000 milliseconds & used it in sleep function
printf(" Please Enter Current Time: Hour:Minutes:Second\n");
scanf("%d%d%d",&h,&m,&s);
if(h>24||m>60||s>60)
{
    printf("ERROR:\n");
    exit(1);
}
while(1)
{
    s++;
    if(s>59)
    {
    m++;
    s=0;}
    if(m>59)
    {h++;
    m=0;}
    if(h>24)
    {
        h=1;
    }
    if(h<12)
    {printf("CLOCK:\t");
    printf("%02d:%02d:%02d AM",h,m,s);
    sleep(1);  //the function sleep slows down the while loop
    system("cls");//this clears the screens
    }
    else
    {printf("CLOCK:\t");
    printf("%02d:%02d:%02d PM",h,m,s);
    sleep(1);  //the function sleep slows down the while loop
    system("cls");//this clears the screens
    }
}
getch();
}