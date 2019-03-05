#include <stdio.h>
main()
{
    int i;
    int j = 2;
    int column, n;
    int composite[10001];
    int count = 0;

    scanf("%d", &n);
    scanf("%d", &column);

    for(i = 2; i <= n; i++)
        composite[i] = 0;

    while(j * j <= n){
        while(composite[j] == 1)
            j++;
        for(i = 2 * j; i <= n; i += j)
            composite[i] = 1;
        j++;
    }

    for(i = 2; i <= n; i++){
       if(composite[i] == 0){
        if(count % column == column - 1){
            printf("%4d\n", i);
            count++;
        }
        else{
            printf("%4d ", i);
            count++;
        }
       }
    }
}
