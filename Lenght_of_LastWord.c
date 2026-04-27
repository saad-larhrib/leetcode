int lengthOfLastWord(char* s) {
    int i = 0;

    // find end
    while(s[i] != '\0') i++;
    i--;

    // skip spaces
    while(i >= 0 && s[i] == ' ') i--;

    // count last word
    int count = 0;
    while(i >= 0 && s[i] != ' ') {
        count++;
        i--;
    }

    return count;
}
