#include <stdio.h>

int main(void)
{
    float speed_mbs;
    float file_size;
    float time;

    printf("Enter download speed in megabits per second (Mbs): ");
    scanf("%f", &speed_mbs);
    printf("Enter size of the file in megabytes (MB): ");
    scanf("%f", &file_size);

    time = 8 * file_size / speed_mbs;
    printf("At %.2f megabits per second, a file of %.2f megabytes\n", speed_mbs, file_size);
    printf("downloads in %.2f seconds.\n", time);

    return 0;
}