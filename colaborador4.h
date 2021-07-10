void transpuesta(float (*m1)[5], float(*r)[5])
{
	cout<<"||-----TRANSPUESTA-----||\n";

  cout<<"Matriz Normal\n";
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<m1[i][j]<<" ";
		}
		cout<<"\n";
	}	
  
	cout<<"\nMatriz Transpuesta\n";
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<m1[j][i]<<"  ";
		}
		cout<<"\n";
	}	
}
