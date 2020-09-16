int gcd(int a, int b){
    int r = 0;
    do{
        r = b % a;
        b = a;
        if(r)
            a = r;
    } while (r != 0); 
    
    return a;
}