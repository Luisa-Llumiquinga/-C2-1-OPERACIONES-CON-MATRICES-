void mediayvarianza(float (*m1)[5], float(*m2)[5])

{
	cout<<"||-----MEDIA Y VARIANZA-----||\n";
	int Nf=5,Nc=5, r=0,r2=0;
	int  med=0,med2=0,var=0,var2=0;

	cout<<"\nMedia matriz #1\n\n";
	for (int h=0; h<Nf;h++)
	{
      	for (int c=0;c<Nc;c++)
      {
      		r+=m1[h][c];
    	}
 	}
  med= r/25;
	cout<<med;
	cout<<"\n";
	
	cout<<"\nVarianza matriz #1\n\n";
	for (int h=0; h<Nf;h++)
	{
      	for (int c=0;c<Nc;c++)
		    {
      		  var=pow (m1[h][c]*med,25);
   		  }
    
  }
	var/=25;
	cout<<var;
	cout<<"\n";
	
	cout<<"\nMedia matriz #2\n\n";
	for (int h=0; h<Nf;h++)
	{
      	for (int c=0;c<Nc;c++)
		    {
      		  r2+=m1[h][c];
    	  }
  }
  med2= r2/25;
	cout<<med2;
	cout<<"\n";
	
	cout<<"\nVarianza matriz #2\n\n";
	for (int h=0; h<Nf;h++)
	{
      for (int c=0;c<Nc;c++)
		  {
      	  var2=pow (m1[h][c]*med2,25);
    	}
 	}
	var2/=25;
	cout<<var2;
	cout<<"\n";
}
