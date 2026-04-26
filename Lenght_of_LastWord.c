int lengthOfLastWord(char* s) {
    int i = 0;
    // find length
    while(s[i] != '\0')
	    i++;

    i--; // last character
    
    // skip trailing spaces
    while(i >= 0 && s[i] == ' ')
	    i--;
    
    // count last word
    int counter = 0;
    while(i >= 0 && s[i] != ' ')
	    counter++;
return counter;
}
