#include <stdio.h>
char arr[1000];
int index = 0;
int main()
{

    printf("jinruminganciguanlixitong\n");

    while (1)
    {
        printf("1---tianjiaminganzifu\n");
        printf("2---shanchuminganzifu\n");
        printf("3---chakansuoyouminganzifu\n");
        printf("4---tihuannierongzhongdeminganzifu\n");
        printf("5---tuichu\n");

        printf("qingshurugongnengbianhao\n");
        int code;
        scanf("%d",& code);
        if (code == 1)
        {
            printf("qingshuruyaotianjiademinganzifu\n");
            char m;
            scanf("%c,&m");
            scanf("%c,&m");
            arr[index] = m;
            index++;
            printf("tijiachenggong,dianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if (code == 2)
        {
        }
        if (code == 3)
        {
        }
        if (code == 4)
        {
        }
        if (code == 5)
        {
            printf("dianjihuichetuichu\n");
            break;
        }
    }

    return 0;
}