int fibonacciSeries(int);
int fibonacciSeries(int n){
    if(n==1){
        return n-1;
    }
    return fibonacciSeries(n-1) * n;
}