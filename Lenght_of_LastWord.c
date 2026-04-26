int lengthOfLastWord(char* s) {
    int counter = 0;
    int size = 0;
    for(int i = 0; s[i] != '\0'; i++){
        size++;
    }

    for(int i = size - 1; i >= 0; i--){
        if(s[i] == ' '){
            i--;
        }else{
            counter++;
            if(s[i -1] == ' '){
                break;
            }
        }
    }
return counter;
}
