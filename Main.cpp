#include <iostream>
#include <string>

using namespace std;

class Item;



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