bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)){
        return 0;
    }
    
    int reversHalf = 0;
    while(x != 0){
        reversHalf =  reversHalf * 10 + (x % 10);
        x = x / 10;
    }
return (x == reversHalf) || (x == reversHalf/10);
}
