#pragma once
enum CATEGORY
{
	LUXURY,
	FIRST_CLASS,
	MIDLLE_CLASS,
	ECONOMY
};

class Home
{
private:
	// the number of rooms
	int rooms_cnt;

	// in square meters
	double size;

public:
	Home(int, double);
	~Home();
	int getRoomsCnt() const;
	int getSize() const;
	void setRoomsCnt(int);
	void setSize(double);
	virtual void display() const;

};
