#include <iostream>
using namespace std;
class Transport {
public:
	int year_release;
	string mark;
	double S;
	double V;
	Transport() :year_release{ 0 }, mark{ "" }, S{ 0 }, V{ 0 } {
	}
	Transport(int ag, string marka, double speed, double way) :year_release{ ag }, mark{ marka }, S{ way }, V{ speed } {
	}
};
class Automobile : public Transport {
	string type_motor;
	int vitrat_fuel;
public:
	Automobile(int ag, string marka, double speed, double way, string motor, int fuel) :Transport(ag, marka, speed, way), type_motor(motor), vitrat_fuel( fuel ) {
		cout << "Automobile\n" << "Marka: " << mark << "\nYear of release: " << year_release << 
			"\nWay: " << S << "\nSpeed: " << V << "\nMotor's type: " << type_motor << endl;
		cout << "Time: "<<S/V<<" hours\nPrice: "<<((way/100)* vitrat_fuel)*60<<" grn";
	}
};
class Bike : public Transport {
	int gears;
	int amortization;
	int obslugovuvannya;
	int other_vitrat;
public:
	Bike(int ag, string marka, double speed, double way, int gear,int amor,int obsl,int vitrat)
		:Transport(ag, marka, speed, way), gears(gear), amortization(amor), obslugovuvannya(obsl), other_vitrat(vitrat){
		cout << "Bicycle\n" << "Marka: " << mark << "\nYear of release: " << year_release <<
			"\nWay: " << S << "\nSpeed: " << V << "\nGears: " << gears << endl;
		cout << "Time: " << S / V << " hours\nPrice: " <<(amortization+ obslugovuvannya+ other_vitrat)*S << " grn";
	}
};
class Viz : public Transport {
	string Whopull;
    double amortization;
	double obslugovuvannya;
	double other_vitrat;
public:
	Viz(int ag, string marka, double speed, double way, string puller, double amor, double obsl, double vitrat)
		:Transport(ag, marka, speed, way), Whopull(puller), amortization(amor), obslugovuvannya(obsl), other_vitrat(vitrat) {
		cout << "Viz\n" << "Marka: " << mark << "\nYear of release: " << year_release <<
			"\nWay: " << S << "\nSpeed: " << V << "\nWho pull: " << Whopull << endl;
		cout << "Time: " << S / V << " hours\nPrice: " << (amortization + obslugovuvannya + other_vitrat) * S << " grn";
	}
};
int main()
{
	Automobile car{ 2008,"Mitsubishi",155,583,"Mitsubishi S4L2",30};
	cout << endl << endl;
	Bike bicycle{ 2015,"Sсhwinn",32,267,17,5,7,8};
	cout << endl << endl;
	Viz viz{ 1998,"Strongway",15,180,"Horse",1.5,2.5,6 };
}

