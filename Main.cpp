#include <iostream>
#include <string>

using namespace std;

class Item;

class A
{
public:
	A()
	{
		msg = "Empty message";
	}

	A(string msg)
	{
		this->msg = msg;
	}

	A(string msg, int num)
	{
		this->msg = msg;
	}

	void PrintMsg()
	{
		cout << msg << endl;
	}

	~A()
	{
		cout << "Destructor A" << endl;
	}
	
private:
	string msg;

protected:
};

class B : public A
{
public:
	B():A("SFML the BEST", 12)
	{
		//cout << "Construct B" <<  endl;
	}

	~B()
	{
		cout << "Destructor B" << endl;
	}
};

class Gun
{
public:
	virtual void Shoot()
	{
		cout << "BANG!" << endl;
	}
};

class SutmachinGun : public Gun
{
public:
	void Shoot() override
	{
		cout << "BANG! BANG! BANG!" << endl;
	}
};



class Item
{
public:
	virtual void Use_Item()
	{
		cout << "You use item" << endl;
	}
};

class Apple : public Item
{
	void Use_Item() override
	{
		cout << "You eat apple" << endl;
	}
};

class Wood : public Item
{
	void Use_Item() override
	{
		cout << "you use wood" << endl;
	}
};

class Player
{
public:
	void Shoot(Gun* gun)
	{
		gun->Shoot();
	}

	void Use_Item(Item* item)
	{
		item->Use_Item();
	}
};

int main()
{
	Player player;
	Apple apple;
	Wood wood;

	player.Use_Item(&apple);

	cout << endl << endl;

	return 0;
}