    int r;
    printf("Enter a number of rows\n");
    scanf("%d",&r);

    for(int i=1;i<=r;i++){
        printf("\n");
        for(int j=1;j<=i;j++){
            printf("* ");
        }
    }