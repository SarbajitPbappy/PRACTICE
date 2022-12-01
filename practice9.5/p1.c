/*Write a C program to take one positive integer N, the size of an array as input. Then take an integer array of size
N as input and show output in reverse order.*/
main()

{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for (j = n; j >= 1; j--)
    {
        printf("%d ",arr[j]);
    }     
    int size=sizeof(arr)/sizeof(arr[1]);
    printf("\n%d",size);                                             
}