//Study the variation of time period, kinetic and potential energy for a simple pendulum.
#include<stdio.h>
#include<iostream>
#include <math.h>
using namespace std;
void root()
{
	double num,root;
	int l,m,a,x;
	float g=9.8,T,K,P,w;
	cout<<"AIM: To study the variation of time period, kinetic and potential energy for a simple pendulum."<<endl<<endl;
	cout<<"Let, T = Time period, \nl = length of simple pendulum, \ng = gravity(9.8N/kg), \nm = mass of particle, \n";
	cout<<"a = distance between the mean and extreme position, \nw = angular velocity, \nv = instantaneous velocity"<<endl<<endl;
	cout<<"1) Time period for a simple pendulum is given as, T^2 = 4*3.14*3.14*l/g "<<endl<<endl;
	cout<<"2) Kinetic Energy: It is the energy possessed by an object when it is in motion."<<endl;
	cout<<"The instantaneous velocity of the particle performing S.H.M. at a distance x from the mean position is given by,"<<endl;
	cout<<"\t v^2=w^2(a^2-x^2)"<<endl;
	cout<<"\t K = m*v^2/2"<<endl;
	cout<<"Substituting the value of v, ";
	cout<<"the kinetic energy for a simple pendulum is given as, K = m*w^2(a^2-x^2)/2 "<<endl<<endl;
	cout<<"3) Potential Energy: It is the energy possessed by the particle for stored energy of position."<<endl;
	cout<<"So, the potential energy for a simple pendulum is given as, P = m*w^2*x^2/2"<<endl<<endl<<"****************************************"<<endl;
	cout<<"\n Enter the length of the simple pendulum l = ";
	cin>>l;
	num=l/g;
	root = sqrt(num);
	T = 2*3.14*root;
	cout<<"\n Time period, T = "<<T<<endl<<endl<<"**********************************************************"<<endl;
	cout<<"\n Enter the mass of the particle, m = ";
	cin>>m;
	cout<<"\n Enter the angular velocity of the particle, w = ";
	cin>>w;
	cout<<"\n Enter the distance between mean position and extreme position, a = ";
	cin>>a;
	cout<<"\n Enter the distance from position of the particle, x = ";
	cin>>x;
	K = m*w*w*(a*a-x*x)/2;
	cout<<"\n Kinetic Energy, K = "<<K<<endl<<endl<<"************************************************************"<<endl;
	P = m*w*w*x*x/2;
	cout<<"\n Potential Energy, P = "<<P<<endl<<endl<<"************************************************************";
}
int main()
{
	root();
	return 0;
}
