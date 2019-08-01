#pragma once

#ifndef PLORG_H_
#define PLORG_H_

#include <iostream>

class Plorg
	{
	private:
		enum {MAX=20};
		char fullname_[MAX];
		int ci_;

	public:
		Plorg();
		Plorg(const char *fullname,const int ci);
		void Plorgshow() const;
		void reset(const int &ci);
	};

#endif //

