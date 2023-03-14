#include <stdio.h>
 
int main(){
	
	char c;
	int check = 0;
	
	while((c = getchar())!= EOF){		

		if(check == 1 && c == ' '){			
			continue;
		}else{
			putchar(c);
		}		

		if(c == ' '){
			check = 1;
		}else{
			check = 0;
		}		
	}
	
	return 0;
}