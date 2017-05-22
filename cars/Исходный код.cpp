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
		get();
	};

		Auto (){
		fuel = 100;
		speed = 50;
		coins = 0;
		//get();
		cout << endl;
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
	virtual void pick_up(Auto &b){
		b.speed +=20;
		b.coins +=150;

	}
};

class checkpoint : public bonus {

};

class abstract {

	virtual void get()=0{
	cout << "Class is working!!! " << endl; 
	}
};

class horses ;
class engine{
public:
	class horses{
	friend class engine;
		horses(int h=0);
	};

};


int Auto:: health;
int main (){
	setlocale(0,"");

	bonus box;
	Auto bmw (100,20,0);
	checkpoint save;
	//bmw.message();
	//bmw.get();
	bmw.show_stat();

	cout << endl << '\t' <<  "Car pick up a bonus" << endl;

	box.pick_up(bmw);
	cout << endl;
	bmw.get();

	cout << endl << '\t' << "Second car is Lada" << endl;

	Auto lada;
	lada.set(20,10,0);
	lada.get();
	cout << endl << '\t' <<  "Car pick up a bonus" << endl;
	save.pick_up(lada);
	cout << endl;
	lada.get();

	system("pause");
	return 0;

}
