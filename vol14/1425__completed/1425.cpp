#include <stdio.h>


int arr[100001];

int main(){
    int max,test,k,i,j,stair,temp;
    char flag;


    scanf("%d",&test);

    for (k=1;k<=test;++k){
        scanf("%d",&stair);

        max=0;
        if (stair){
            scanf("%d",&arr[0]);
            max=arr[0];
        }


        for (i=1;i<stair;++i){
            scanf("%d",&arr[i]);
            temp=arr[i]-arr[i-1];

            if (temp>max)
                max=temp;
        }

        while(true){
            temp=max;
            flag=1;
            for (j=1;j<stair;++j){
                if (arr[j]-arr[j-1]>temp){
                    flag=0;
                }
                else if (arr[j]-arr[j-1]==temp)
                    --temp;
                }
            if (flag)
                break;
                ++max;
        }

        printf("Case %d: %d\n",k,max);
    }
    return 0;

}
