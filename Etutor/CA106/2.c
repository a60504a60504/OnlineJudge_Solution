#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    double x, y;
} point;//座標值

typedef struct
{
    point center;
    double r;//半徑
} circle;
circle cir1,cir2;//宣告兩圓的結構
void calc(circle,circle);//計算用函數

int main(void)
{
    scanf("%lf %lf %lf %lf %lf %lf",&cir1.center.x,&cir1.center.y,&cir1.r,&cir2.center.x,&cir2.center.y,&cir2.r);
    calc(cir1,cir2);//呼叫calc函數
    return 0;
}

void calc(circle cir1,circle cir2)
{
    double x1,x2,y1,y2;//此為兩圓相交的坐標
    if(cir1.center.y!=cir2.center.y)//兩圓圓心Y值不同時
    {
        //m= y=mx+k的x項系數、k= y=mx+k的k項常數、 a、b、c= x=(-b±√(b^2-4ac))/2a的係數
        double m=(cir1.center.x-cir2.center.x)/(cir2.center.y-cir1.center.y),k=(pow(cir1.r,2)-pow(cir2.r,2)+pow(cir2.center.x,2)-pow(cir1.center.x,2)+pow(cir2.center.y,2)-pow(cir1.center.y,2))/(2*(cir2.center.y-cir1.center.y));
        double a=1+pow(m,2),b=2*(k*m-cir2.center.x-m*cir2.center.y),c=pow(cir2.center.x,2)+pow(cir2.center.y,2)+pow(k,2)-2*k*cir2.center.y-pow(cir2.r,2);

        if(b*b-4*a*c>=0)//有交點時
        {
            x1=((-b)+sqrt(b*b-4*a*c))/(2*a);//x=(-b+√(b^2-4ac))/2a
            y1=m*x1+k;//y=mx+k
            x2=((-b)-sqrt(b*b-4*a*c))/(2*a);//x=(-b-√(b^2-4ac))/2a
            y2=m*x2+k;//y=mx+k
            if(b*b-4*a*c>0)//兩交點
                printf("%.2lf,%.2lf\n%.2lf,%.2lf\n",floor(x2*100)/100,floor(y2*100)/100,floor(x1*100)/100,floor(y1*100)/100);
            else//一交點
                printf("%.2lf,%.2lf\n",floor(x1*100)/100,floor(y1*100)/100);
        }
        else//沒有交點時
            printf("null\n");
    }
    else if((cir1.center.y==cir2.center.y))//兩圓圓心Y值相同時
    {
        //x1= 兩交點的x值、 a、b、c= x=(-b±√(b^2-4ac))/2a的係數
        x1=-(pow(cir1.center.x,2)-pow(cir2.center.x,2)-pow(cir1.r,2)+pow(cir2.r,2))/(2*cir2.center.x-2*cir1.center.x);
        double a=1,b=-2*cir1.center.y,c=pow(x1,2)+pow(cir1.center.x,2)-2*cir1.center.x*x1+pow(cir1.center.y,2)-pow(cir1.r,2);
        if(b*b-4*a*c>=0)
        {
            y1=((-b)+sqrt(b*b-4*a*c))/(2*a);//y=(-b+√(b^2-4ac))/2a
            y2=((-b)-sqrt(b*b-4*a*c))/(2*a);//y=(-b-√(b^2-4ac))/2a
            if(b*b-4*a*c>0)//兩交點
                printf("%.2lf,%.2lf\n%.2lf,%.2lf\n",floor(x1*100)/100,floor(y2*100)/100,floor(x1*100)/100,floor(y1*100)/100);
            else//一交點
                printf("%.2lf,%.2lf\n",floor(x1*100)/100,floor(y1*100)/100);
        }
        else//沒有交點時
            printf("null\n");
    }
}
