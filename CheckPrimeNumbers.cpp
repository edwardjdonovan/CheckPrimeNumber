int Solution::isPrime(int A) {

    if (A<=1){
        return 0;  
    }
    
    int remainder;
    
    for (int i = 2; i <= sqrt(A); i++ ){
        remainder = A%i;
        if (remainder == 0){
            return 0;
        }
    }
    return 1;
}

