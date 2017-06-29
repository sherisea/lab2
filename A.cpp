#include<iostream>
#include<math.h>
#include<stdio.h>
#include<fstream>
#include<string>
#include<cstdlib>
#include "a.h"
using namespace std;


int main(){
	double KK=0;double K1=0.5;double K2=0.5;double K3=0;double K4=0;double K5=0;
	double Qa=0;double Q1=0;double Q2=0;double Q3=0;double Q4=0;double Q5=0;
	double Qb=0;double Q6=0;double Q7=0;double Q8=0;double Q9=0;double Q10=0;
	double N=1;double N1=0.5;double N2=0.5;double N3=1;double N4=1;double N5=1;
	
	double i=0;
	string headline;
	score A;
	ifstream inFile("filein.txt",ios::in);
	if(!inFile)
		{
			cout<<"file opened failed"<<endl;
			exit(1);
		}
	ofstream outFile("outfile", ios::out);
	if(!outFile) {
 cerr << "Failed opening" << endl;
 exit(1);
 }

			if(inFile>>i>>Qa>>Qb)
			{
				
				A.score1(Qa,Qb);
				A.down1();
				A.down2();
				A.opcount1();
				A.opcount2();
				A.multi1(KK);
				A.multi2(N);
				A.calculate();
				A.calculate1();
				outFile<<A.calculate()<<"\t"<<A.calculate1()<<endl;
				
			}
						Q1=A.calculate();
		    Q2=A.calculate1();
			
	A.score1(Q1,Q2);
				A.down1();
				A.down2();
				A.opcount1();
				A.opcount2();
				A.multi1(K1);
				A.multi2(N1);
				A.calculate();
				A.calculate1();
				outFile<<A.calculate()<<"\t"<<A.calculate1()<<endl;

				Q3=A.calculate();
		    Q4=A.calculate1();
			
	A.score1(Q3,Q4);
				A.down1();
				A.down2();
				A.opcount1();
				A.opcount2();
				A.multi1(K2);
				A.multi2(N2);
				A.calculate();
				A.calculate1();
				outFile<<A.calculate()<<"\t"<<A.calculate1()<<endl;

				Q5=A.calculate();
		    Q6=A.calculate1();
			
	A.score1(Q5,Q6);
				A.down1();
				A.down2();
				A.opcount1();
				A.opcount2();
				A.multi1(K3);
				A.multi2(N3);
				A.calculate();
				A.calculate1();
				outFile<<A.calculate()<<"\t"<<A.calculate1()<<endl;

				Q7=A.calculate();
		    Q8=A.calculate1();
			
	A.score1(Q7,Q8);
				A.down1();
				A.down2();
				A.opcount1();
			        A.opcount2();
				A.multi1(K4);
				A.multi2(N4);
				A.calculate();
				A.calculate1();
				outFile<<A.calculate()<<"\t"<<A.calculate1()<<endl;

				Q9=A.calculate();
		    Q10=A.calculate1();
			
	A.score1(Q9,Q10);
				A.down1();
				A.down2();
				A.opcount1();
				A.opcount2();
				A.multi1(K5);
				A.multi2(N5);
				A.calculate();
				A.calculate1();
				outFile<<A.calculate()<<"\t"<<A.calculate1()<<endl;
		
	
				return 0;
}
