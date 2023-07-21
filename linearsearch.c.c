#include <stdio.h>


int main()
{
    int data[100],n,findele;
    printf("Enter the value n:");
    scanf("%d",&n);
    printf("Enter %d integers:",n);
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&data[i]);
    }
    
    // for(int i = 0; i < n; ++i) {
    // printf("%d\n", data[i]);
        
    // }
    printf("Enter the element to be found:");
    scanf("%d",&findele);
    
    for(int i=0;i<n;i++)
    {
        if(findele == data[i])
        {
            printf("element kitti");
            break;
        }
        else
        {
            printf("not kitti");
            break;
        }
    }
    
    

    return 0;
}
