#include <stdio.h>

int main(int argc, char* argv[]) {
    int num;
    int buf[1000] = {};
    int index = 0;
    int i=0;
    int n = 0;

    scanf("%d",&num);

    while(i != num)                 //입력
    {
        scanf("%d", &buf[i++]);

    }

    while(n != num)
    {
        index = n;
        for(int j = 0; j <num; j++) //숫자 이동
        {

            printf("%d ",buf[index]);
            index++;
            if(index == num)
            {
                index = 0;
            }
        }
        printf("\n");
        n++;
    }
    return 0;
}
