#include <stdio.h>
#include <math.h>

int main(void)
{

    /* 2次方程式の定数 */
    float a, b, c;

    /* 判別式 */
    float D;
    /*解*/
    float kai1, kai2;
    float real, imag;

    printf("2次方程式の定数を入力してください。\n");

    printf("a = ");
    scanf_s("%f", &a);
    if (a == 0)
    {
        printf("0以外の数字を入力してください");
    }
    else
    {


        printf("b = ");
        scanf_s("%f", &b);

        printf("c = ");
        scanf_s("%f", &c);

        /* 判別式を計算 */
        D = b * b - 4 * a * c;

        /* 判別式に数値による条件分岐 */
        if (D > 0)
        {
            /* 解の計算*/
            kai1 = (-b + sqrt(D)) / (2 * a);
            kai2 = (-b - sqrt(D)) / (2 * a);

            printf("2次方程式の解: x = %.2f, %.2f\n", kai1, kai2);

        }
        else if (D == 0)
        {
            kai1 = kai2 = -b / (2 * a);

            printf("2次方程式の解: x = %.2f, %.2f\n", kai1, kai2);

        }
        else
        {
            real = -b / (2 * a);
            imag = sqrt(-D) / (2 * a);

            printf("2次方程式の解: %.2f+%.2fi, %.2f-%.2fi\n", real, imag, real, imag);
        }
    }
    return 0;
}
