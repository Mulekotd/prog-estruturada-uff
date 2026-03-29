#include <stdio.h>

int main()
{
    double sb, sl;

    scanf("%lf", &sb);
    sl = sb;

    if (sb >= 500 && sb < 800) sl -= sb * 0.1;
    else if (sb >= 800 && sb < 1000) sl -= sb * 0.15;
    else if (sb > 1000) sl -= sb * 0.8;

    printf("%.2lf\n", sl);

    return 0;
}
