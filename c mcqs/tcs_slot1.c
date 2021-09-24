#include<stdio.h>

int main()
{
    int R,C;
    int max_count =0,count,index=0;
    scanf("%d %d",&R,&C);
    int mat[R][C];
    for (int i=0;i<R;i++){
        for (int j=0;j<C;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    for (int i = 0; i < R; i++)
    {
        count = 0;
        for (int j = 0; j < C; j++)
        {
            if(mat[i][j] == 1){
                count++;
            }
        }
        if(count>max_count)
        {
            max_count = count;
            index = i+1;
        }

    }

    printf("%d",index);
    



    return 0;
}