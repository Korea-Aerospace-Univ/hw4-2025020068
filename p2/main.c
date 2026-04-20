#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int N;
    char ch;

    int lower_cnt = 0, lower_max = 0;
    int digit_cnt = 0, digit_max = 0;

    bool in_lower = false;
    bool in_digit = false;

    scanf("%d", &N);
    ch=getchar();
    for (int i = 0; i < N; i++) {
        scanf("%c", &ch);

        if (ch >= 'a' && ch <= 'z') {
            if (in_lower) {
                lower_cnt++;
            } 
            else {
                lower_cnt = 1;
                in_lower = true;
            }

            if (lower_cnt > lower_max)
                lower_max = lower_cnt;

            in_digit = false;
            digit_cnt = 0;
        }
        else if (ch >= '0' && ch <= '9') {
            if (in_digit) {
                digit_cnt++;
            } 
            else {
                digit_cnt = 1;
                in_digit = true;
            }

            if (digit_cnt > digit_max)
                digit_max = digit_cnt;

            in_lower = false;
            lower_cnt = 0;
        }
    }

    printf("%d\n", lower_max);
    printf("%d\n", digit_max);

    return 0;
}
