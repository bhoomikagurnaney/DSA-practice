double myPow(double x, int n) {
    double power=1.0; int i;
    if (n>0)
    {
        for(i=0;i<n;i++)
        {
            power=power*x;
        }
       return power;
    }
    else if (n==0)
    {
       return 1;
    }
    else
    {
        n = -n ;
        for(i=0;i<n;i++)
        {
            power=power*x;
        }
        return 1/power;
    }
}
