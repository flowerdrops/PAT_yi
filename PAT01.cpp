#include <stdio.h>
int main() {
    int num = 0, time = 0;
    scanf("%d",&num);
    while (num != 1) {
        if (num%2 == 0) {
            num /= 2;
            time++;
        } else if (num % 2 != 0)
        {
            num = (3*num+1)/2;
            time++;
        }
    }
    printf("%d",time);
    return 0;
}
