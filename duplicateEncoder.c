#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

char *DuplicateEncoder(char *s) {
	int len = strlen(s);
	char *duplicate = NULL;
	bool isDuplicate = false;
	int i = 0;
	duplicate = (char *)malloc(sizeof(char) * (len + 1));
  
	while (i <= len) {
		duplicate[i] = '\0';
		i++;
  	}

	for (i = 0; i < len; i++) { 
		for (int j = 0; j < len; j++) {
			if (j == i) {
				continue;
        	}
      		if (tolower(s[i]) == tolower(s[j])) {
        		duplicate[i] = ')';
        		isDuplicate = true;
        		break;
      		} 
    	}
    	if (isDuplicate) {
        	isDuplicate = false;
        	continue;  
    	}
    	else {
        	duplicate[i] = '(';
    	}
    }
    return duplicate;
}
