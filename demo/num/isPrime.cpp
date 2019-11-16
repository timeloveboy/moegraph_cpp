
bool isPrime( unsigned n){ 
	//C єЇКэ ¶ЁТе 
	if (n< 2) 
		return false; 
	if (n== 2 || n== 3 || n== 5 || n== 7) 
		return true; 
	for (int i= 2; i* i<= n; i ++)
		if (n% i== 0) 
			return false;
	return true; 
}
 