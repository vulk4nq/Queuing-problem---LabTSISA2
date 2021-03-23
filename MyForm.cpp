#include "MyForm.h"
#include <cmath>
namespace LabTSISA2
{
	
	MyForm::MyForm(void)
	{
		InitializeComponent();
			
	}
	int phact(int n, int m)
	{
		int res;
		res = n * m;
		

		return(res);
	}
	System::Void MyForm::BtnCl(System::Object^ sender, System::EventArgs^ e)
	{
		int A[4]; int  sum, min,t1,t2,t3,t4;
		
		A[0] = abs(Convert::ToInt32(tb1->Text));
		A[1] = abs(Convert::ToInt32(tb2->Text));
		A[2] = abs(Convert::ToInt32(tb3->Text));
		A[3] = abs(Convert::ToInt32(tb4->Text));
		min = phact(A[2], 4) + phact(A[1], 3) + phact(A[0], 2) + A[3];
		t1 = A[2]; t2 = A[1]; t3 = A[0]; t4 = A[3];
		int n = 4;
		for (int i = 1; i < 4; i++)
		{
			
			
			for (int j = 0; j < 4; j++)
			{
				if (i != j)
				{
					
					for (int k = 0; k < 4; k++)
					{
						if (j != k && k != i)
						{
							sum += A[k]*2;
							for (int l = 1; l < 4; l++)
							{
								if (l != j && l != k && l != i)
								{
									sum = A[i] * (n - 1) + A[j] * (n - 2) + A[k] * (n - 3) + A[l] * (n - 4);
									if (sum < min)
									{
										min = sum;
										t1 = i+1; t2 = j+1; t3 = k+1; t4 = l+1;
									}
								
									
								}
								
								
							}
						}
						
					}
				}
				

			}
		}
		
		tbout->Text += String::Format("Минимальное время очереди = {0}{5}Оно достигается при:{5} Позиция 1 = t{1}{5} Позиция 2 = t{2}{5} Позиция 3 = t{3}{5} Позиция 4 = t{4}", min,t1,t2,t3,t4, Environment::NewLine);
		
		return System::Void();
	}
}