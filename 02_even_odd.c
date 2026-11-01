#include <stdio.h>

int main() {
    int num;
    printf("--- EVEN ODD CHECKER ---\n");
    printf("कोई संख्या दर्ज करें: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d एक सम (Even) संख्या है।\n", num);
    else
        printf("%d एक विषम (Odd) संख्या है।\n", num);

    return 0;
}
