//Calculation of Hall coefficient, Hall Voltage, and concentration of charge carriers for a given material.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float Vm, V, Rh, n, I, B, b=0.5*pow(10,-4), Vh, e=1.6*pow(10,-19);
	cout<<"AIM: Calculation of hall coefficient, hall voltage, and concentration of charge carriers for a given material."<<endl<<endl;
	cout<<"Let, Vm = Voltage with magnetic field(mv), \nV = Voltage without magnetic field(mv), \nVh = Hall voltage(mV), \n";
	cout<<"Rh = Hall coefficient(ohm-m^3/wb), \nB = Magnetic field(T), \nI = Current through the specimen(mA), \n";
	cout<<"b = Thickness of the specimen(0.5*0.001m), \ne = Elementary charge(1.6*pow(10,-19)C)"<<endl<<endl;
	cout<<"Hall Voltage: When a magnetic field is applied perpendicular to a current carrying conductor, a voltage is"<<endl;
	cout<<"developed in a specimen in a direction perpendicular to both the current and the magnetic field. This"<<endl;
	cout<<"phenomenon is called the HALL EFFECT. The voltage is so produced is called HALL VOLTAGE."<<endl<<endl;
    cout<<"So, Hall Voltage is given as, Vh = Vm - V "<<endl;
    cout<<"So, Hall coefficient is given as, Rh = Vh*b/IB "<<endl<<endl;
	cout<<"Case(1), "<<endl<<endl;  //constant magnetic field.
	cout<<"Enter the constant magnetic field, B = ";
	cin>>B;
	B = B*pow(10,-4);
	cout<<"So, the constant magnetic field will be, B = "<<B<<"T"<<endl;
	cout<<"Enter the current through the specimen, I = ";
	cin>>I;
	cout<<"Enter the voltage with magnetic field, Vm = ";
	cin>>Vm;
	cout<<"Enter the voltage without magnetic field, V = ";
	cin>>V;
	Vh = Vm - V;
	cout<<"So, the hall voltage is, Vh = "<<Vh<<"mV"<<endl;
	Rh = (Vh*b)/(I*B);
	cout<<"So, the hall coefficient is, Rh = "<<Rh<<"ohm-m^3/wb"<<endl<<endl;
	n = 1/(Rh*e);
	cout<<"Concentration of charge carriers will be, n = "<<n<<"pow(m,-3)"<<endl<<endl;
	cout<<"Case(2), "<<endl<<endl;  //constant current through the specimen.
	cout<<"Enter the fixed current through the specimen, I = ";
	cin>>I;
	cout<<"Enter the magnetic field, B = ";
	cin>>B;
	B = B*pow(10,-4);
	cout<<"So, the magnetic field will be, B = "<<V<<"T"<<endl;
	cout<<"Enter the voltage with magnetic field, Vm = ";
	cin>>Vm;
	cout<<"Enter the voltage without magnetic field, V = ";
	cin>>V;
	Vh = Vm - V;
	cout<<"So, the hall voltage is, Vh = "<<Vh<<"mV"<<endl;
	Rh = (Vh*b)/(I*B);
	cout<<"So, the hall coefficient is, Rh = "<<Rh<<"ohm-m^3/wb"<<endl<<endl;
	n = 1/(Rh*e);
	cout<<"Concentration of charge carriers will be, n = "<<n<<"pow(m,-3)"<<endl;
	return 0;
}
