//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,m,i,j,k,a,b,tmp;
//    char t;
//    scanf("%d%d",&n,&m);
//    int arr[n][m];
//    for(i=0;i<n;i++)
//        for(j=0;j<m;j++)
//            scanf("%d",&arr[i][j]);
//    scanf("%d",&k);
//    for(i=0;i<k;i++)
//    {
//        scanf("\n%c %d %d",&t,&a,&b);
//        if(t=='r')
//            for(j=0;j<m;j++)
//            {
//                tmp=arr[a-1][j];
//                arr[a-1][j]=arr[b-1][j];
//                arr[b-1][j]=tmp;
//            }
//        else if(t=='c')
//            for(j=0;j<n;j++)
//            {
//                tmp=arr[j][a-1];
//                arr[j][a-1]=arr[j][b-1];
//                arr[j][b-1]=tmp;
//            }
//    }
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<m;j++)
//            printf("%d ",arr[i][j]);
//        printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,i,j;
//    scanf("%d",&n);
//    int arr[n][n];
//    for(i=1;i<=n;i++)
//        for(j=0;j<i;j++)
//        {
//            if(j==0||j==i-1)
//                arr[i-1][j]=1;
//            else
//                arr[i-1][j]=arr[i-2][j]+arr[i-2][j-1];
//        }
//    for(i=1;i<=n;i++)
//    {
//        for(j=0;j<i;j++)
//            printf("%5d",arr[i-1][j]);
//        printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//char win(char arr[3][3])
//{
//    int i=0,j=0;
//    while(i<3)
//    {
//        if(arr[i][0]==arr[i][1]&&arr[i][1]==arr[i][2])
//            return arr[i][0];
//        if(arr[0][j]==arr[1][j]&&arr[1][j]==arr[2][j])
//            return arr[0][j];
//        i++;
//        j++;
//    }
//    if((arr[0][0]==arr[1][1]&&arr[1][1]==arr[2][2])||(arr[0][2]==arr[1][1]&&arr[1][1]==arr[2][0]))
//        return arr[1][1];
//    else
//        return '0';
//}
//int main()
//{
//    int i,j;
//    char x;
//    char arr[3][3];
//    for(i=0;i<3;i++)
//        for(j=0;j<3;j++)
//        {
//            scanf("%c",&arr[i][j]);
//            getchar();
//        }
//    x=win(arr);
//    if(x=='K')
//        printf("KiKi wins!\n");
//    else if(x=='B')
//        printf("BoBo wins!");
//    else
//        printf("No winner!");
//    return 0;
//}
//#include<stdio.h>
//void jin(int n)
//{
//    if(n<6)
//    {
//        printf("%d",n);
//    }
//    else
//    {
//        jin(n/6);
//        printf("%d",n%6);
//    }
//}
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    jin(n);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    long long n;
//    scanf("%lld",&n);
//    printf("%lld",n*(n+1)/2);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int h,d,x;
//    scanf("%d:%d %d",&h,&d,&x);
//    while(x>=60)
//    {
//        x+=d;
//        h+=x/60;
//        while(h>=24)
//            h-=24;
//        x=x%60;
//    }
//    printf("%02d:%02d",h,x);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,count=2;
//    scanf("%d",&n);
//    while(n>=12)
//    {
//        count+=4;
//        n-=12;
//    }
//    printf("%d",count);
//    return 0;
//}
