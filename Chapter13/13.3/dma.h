#pragma once
#ifndef DMA_H_
#define DMA_H_

class DMA_abc {
private:
	char *label;
	int rating;

public:
	DMA_abc(const char *l = "null", int r=0);
	DMA_abc(const DMA_abc&rs);
	virtual ~DMA_abc();
	DMA_abc & operator = (const DMA_abc &rs);
	virtual void View()const = 0;
	friend std::ostream & operator<<(std::ostream & os, const DMA_abc & rs);
};

/*base*/

class baseDMA :public DMA_abc {
public:
	baseDMA(const char*l = "null", int r = 0) :DMA_abc(l, r) {};
	baseDMA(const baseDMA &rs){};
	virtual ~baseDMA();
	baseDMA&operator = (const baseDMA&rs);
	virtual void View()const;
	friend std::ostream & operator<<(std::ostream & os, const baseDMA & rs);
};

/*lack*/

class lacksDMA :public DMA_abc {
private:
	char *color;
public:
	lacksDMA(const char *c="white", const char*l = "null", int r = 0);
	lacksDMA(const char * c,const DMA_abc & rs);
	lacksDMA(const lacksDMA & rs);
	~lacksDMA();
	lacksDMA&operator = (const lacksDMA&rs);
	virtual void View()const;
	friend std::ostream & operator<<(std::ostream & os,const lacksDMA & rs);
};

/*has*/
class hasDMA :public DMA_abc {
private:
	char *style;
public:
	hasDMA(const char *s="none", const char*l = "null", int r = 0);
	hasDMA(const char *s,const DMA_abc &rs);
	hasDMA(const hasDMA &rs);
	~hasDMA();
	hasDMA&operator = (const hasDMA&rs);
	virtual void View()const;
	friend std::ostream & operator<<(std::ostream & os, const hasDMA & rs);
};



#endif // !DMA_H_
