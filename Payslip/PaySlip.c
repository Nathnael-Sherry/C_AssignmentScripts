#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("cls");
	float BasicSal,NSSF,HA,HELB,NHIF,Gross, deductions;
	float Eisc,pf,NetBeforeTax,Tds,SalaryHand;
	

	printf("Organisation Name: TechFin Company\n");
	printf("Tech Department\n");
	
	printf("------------------------------------\n");
	
	printf("Client: Brian Mwendwa\n");
	printf("Client age: 34yrs.\n");
	printf("KRA No: AO9746297\n");
	printf("------------------------------------\n");
	
	printf("Salary Slip\n\n");
	printf("Basic Salary: \n");
	
	scanf("%f",&BasicSal);
	
	deductions = (0.3 * BasicSal);
	
	NSSF = (deductions * 0.1);
	HA =  (deductions * 0.5);
	HELB = 5000; /*Fixed*/
	NHIF = (deductions * 0.75);
	Gross = NSSF + HA + HELB + NHIF;
	
//	Eisc = (Gross * 0.0475);
	pf = (BasicSal * 0.12);
	NetBeforeTax = Gross - pf;
	Tds = (NetBeforeTax * 0.01);
	SalaryHand = NetBeforeTax - Tds;
	
	printf("--------------------------------------\n");
	printf("Basic             |  %10.2f           \n",BasicSal);
	printf("NSSF              |  %10.2f           \n",NSSF);
	printf("Housing Allowance |  %10.2f           \n",HA);
	printf("HELB              |  %10.2f           \n",HELB);
	
	printf("NHIF              |  %10.2f           \n",NHIF);
	printf("Gross Salary      |  %10.2f           \n",Gross);
//	printf("EISC              |  %10.2f           \n",Eisc);
	printf("Providence Fund   |  %10.2f           \n",pf);
	
	printf("Net Before Tax    |  %10.2f           \n",NetBeforeTax);
	printf("TDS               |  %10.2f           \n",Tds);
	printf("-------------------------------------\n");
	printf("Salary in Hand    |  %10.2f           \n",SalaryHand);
	
	
	
	return(0);
}
