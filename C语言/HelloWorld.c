#include<stdio.h>
int main()
{
    /*我的第一个代码*/    
    char ch= 'A';
    short age=20;
    float weight=95.6f;
    double d=3.1415926;
    int num1 =0;
    int num2 =0;
    int sum = 0;
    scanf("%d%d",&num1,&num2);
    sum = num1 + num2;
    printf("num = %d\n",sum);
    printf("%d\n",sizeof(char));
    printf("%d\n",age);
    printf("%lf\n",d);
    printf("%f\n",weight);
    printf("%c\n",ch);
    printf("Hello World！hello Ms.wu!\n");
    printf("你好！世界！你好，上官炽辰！\n");

    return 0;
}