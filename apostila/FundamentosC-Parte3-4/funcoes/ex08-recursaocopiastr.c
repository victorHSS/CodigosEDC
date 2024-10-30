char *copia_str(char *str1, char *str2){
	if (!*str2){
    	    *str1 = '\0';
    	    return NULL;
	}

	*str1 = *str2;
	copia_str(str1 + 1,str2 + 1);

	return str1;
}

int main() {

    return 0;
}
