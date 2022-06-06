#include <stdio.h>

int main() {
    
    int arr[9];
    for(int i=0;i<9;i++)
        scanf("%d", &arr[i]);
    
    int M = arr[0], N = 1;
    for(int i=1;i<9;i++)
    {
        if (M < arr[i])
        {
            M = arr[i];
            N = i + 1;
        }

    }
    
    printf("%d\n%d", M, N);

    return 0;
}
