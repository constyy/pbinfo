int sumNumbers(int x, int y) { 
    return(x+y); 
}

int minusNumbers(int x, int y) { 
    return(x-y); 
}

int divideNumbers(int x, int y) { 
    return(x/y); 
}

int multiplyNumbers(int x, int y) { 
    return(x*y); 
}

int isPrimeNumber(int n) {
    int i;
    for(i = 2; i <= n/2; ++i) if(n % i == 0) return true;
    return false;
}
