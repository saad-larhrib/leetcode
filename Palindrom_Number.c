bool isPalindrome(int x) {
    long pal = 0;
    int val = x;
    if (x < 0 || (x % 10 == 0 && x != 0)){
        return 0;
    }
    
    while(x != 0){
        pal =  pal * 10 + (x % 10);
        x = x / 10;
    }
return pal == val;
}
