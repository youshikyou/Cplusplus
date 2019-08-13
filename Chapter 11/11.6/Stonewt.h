#pragma once
#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>

static const int Lbs_per_stone = 14;

class Stonewt
{
public:
	enum Mode { STONE,POUNDS };
	Stonewt();
	Stonewt(double lbs,Mode form=POUNDS);
	Stonewt(int s, double lbs,Mode form = STONE);
	~Stonewt();
	void Reset(double lbs);
	void Reset(int s, double lbs);
	Stonewt operator +(const Stonewt &b) const;
	Stonewt operator -(const Stonewt &b) const;
	Stonewt operator *(double mul) const;
	bool operator >(const Stonewt &b) const;
	bool operator >=(const Stonewt &b) const;
	bool operator <(const Stonewt &b) const;
	bool operator <=(const Stonewt &b) const;
	bool operator ==(const Stonewt &b) const;
	bool operator !=(const Stonewt &b) const;
	
	friend std::ostream & operator <<(std::ostream &os, const Stonewt &a);
	friend std::ostream & operator >>(std::ostream &os, const Stonewt &a);
	friend Stonewt operator *(double mul, const Stonewt &a);


private:
	int stone;
	double pound;
	double pounds;
	Mode format;
	
};


#endif //
