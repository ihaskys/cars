#include <iostream>
#include <string>

using namespace std;
class bonus;
class Auto {
	friend class bonus;
private: 
	int static health;
	int fuel, speed, coins;
public: 
	
	Auto (int fuel_fuel, int speed_speed, int coins){
		set( fuel_fuel,  speed_speed, coins);
	};
	/*void message(){
		cout << "Hello world"<< endl;
	}*/
	void set (int fuel_fuel, int speed_speed, int coins ){
		fuel = fuel_fuel;
		speed = speed_speed;
		this->coins = coins;
		health=100;
		}
	void get(){
		cout << "Car characteristics"<< endl;
		cout << "Fuel: "<< fuel << ", speed: " << speed << ", coins: "<< coins<< endl;
	}
	void show_stat(){
		cout << "Health: "<< health<< endl; 
	}
	~Auto(){
		cout << "Memory is cleaned"<< endl;
	}
};
class bonus{
public:
	void pick_up(Auto &b){
		b.speed +=20;
		b.coins +=150;

	}
};
int Auto:: health;
int main (){
	setlocale(0,"");
	bonus box;
	Auto bmw (100,20,0);
	//bmw.message();
	bmw.get();
	bmw.show_stat();

	box.pick_up(bmw);
	cout << endl;
	bmw.get();


	system("pause");
	return 0;

}




