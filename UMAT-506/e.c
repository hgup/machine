// user input
	int n;
	printf("Enter number: ");
	scanf("%d",&n);

// repeat user input
	do{
		printf("Enter input: ");
		// replace with var
		scanf("%d",&n);
	} while(n<=0 ? printf("ERROR") : 0); 
