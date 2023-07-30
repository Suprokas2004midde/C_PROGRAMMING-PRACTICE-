 for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(max<arr[i][j])
            {
                max=arr[i][j];
                row=i;
                col=j;
            }
        }
    }