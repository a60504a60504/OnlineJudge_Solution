#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    double x, y;
} point;//�y�Э�

typedef struct
{
    point center;
    double r;//�b�|
} circle;
circle cir1,cir2;//�ŧi��ꪺ���c
void calc(circle,circle);//�p��Ψ��

int main(void)
{
    scanf("%lf %lf %lf %lf %lf %lf",&cir1.center.x,&cir1.center.y,&cir1.r,&cir2.center.x,&cir2.center.y,&cir2.r);
    calc(cir1,cir2);//�I�scalc���
    return 0;
}

void calc(circle cir1,circle cir2)
{
    double x1,x2,y1,y2;//�������ۥ檺����
    if(cir1.center.y!=cir2.center.y)//�����Y�Ȥ��P��
    {
        //m= y=mx+k��x���t�ơBk= y=mx+k��k���`�ơB a�Bb�Bc= x=(-b�ӡ�(b^2-4ac))/2a���Y��
        double m=(cir1.center.x-cir2.center.x)/(cir2.center.y-cir1.center.y),k=(pow(cir1.r,2)-pow(cir2.r,2)+pow(cir2.center.x,2)-pow(cir1.center.x,2)+pow(cir2.center.y,2)-pow(cir1.center.y,2))/(2*(cir2.center.y-cir1.center.y));
        double a=1+pow(m,2),b=2*(k*m-cir2.center.x-m*cir2.center.y),c=pow(cir2.center.x,2)+pow(cir2.center.y,2)+pow(k,2)-2*k*cir2.center.y-pow(cir2.r,2);

        if(b*b-4*a*c>=0)//�����I��
        {
            x1=((-b)+sqrt(b*b-4*a*c))/(2*a);//x=(-b+��(b^2-4ac))/2a
            y1=m*x1+k;//y=mx+k
            x2=((-b)-sqrt(b*b-4*a*c))/(2*a);//x=(-b-��(b^2-4ac))/2a
            y2=m*x2+k;//y=mx+k
            if(b*b-4*a*c>0)//����I
                printf("%.2lf,%.2lf\n%.2lf,%.2lf\n",floor(x2*100)/100,floor(y2*100)/100,floor(x1*100)/100,floor(y1*100)/100);
            else//�@���I
                printf("%.2lf,%.2lf\n",floor(x1*100)/100,floor(y1*100)/100);
        }
        else//�S�����I��
            printf("null\n");
    }
    else if((cir1.center.y==cir2.center.y))//�����Y�ȬۦP��
    {
        //x1= ����I��x�ȡB a�Bb�Bc= x=(-b�ӡ�(b^2-4ac))/2a���Y��
        x1=-(pow(cir1.center.x,2)-pow(cir2.center.x,2)-pow(cir1.r,2)+pow(cir2.r,2))/(2*cir2.center.x-2*cir1.center.x);
        double a=1,b=-2*cir1.center.y,c=pow(x1,2)+pow(cir1.center.x,2)-2*cir1.center.x*x1+pow(cir1.center.y,2)-pow(cir1.r,2);
        if(b*b-4*a*c>=0)
        {
            y1=((-b)+sqrt(b*b-4*a*c))/(2*a);//y=(-b+��(b^2-4ac))/2a
            y2=((-b)-sqrt(b*b-4*a*c))/(2*a);//y=(-b-��(b^2-4ac))/2a
            if(b*b-4*a*c>0)//����I
                printf("%.2lf,%.2lf\n%.2lf,%.2lf\n",floor(x1*100)/100,floor(y2*100)/100,floor(x1*100)/100,floor(y1*100)/100);
            else//�@���I
                printf("%.2lf,%.2lf\n",floor(x1*100)/100,floor(y1*100)/100);
        }
        else//�S�����I��
            printf("null\n");
    }
}
