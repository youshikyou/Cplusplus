#include<cstring>
#include<iostream>
#include"dma.h"

DMA_abc::DMA_abc(const char *l, int r)
{
	label = new char[strlen(l) + 1];
	strcpy_s(label, strlen(l) + 1, l);
	rating = r;
}

DMA_abc::DMA_abc(const DMA_abc&rs)
{
	label = new char[strlen(rs.label) + 1];
	strcpy_s(label, strlen(rs.label) + 1, rs.label);
	rating = rs.rating;
}

DMA_abc:: ~DMA_abc()
{
	delete[]label;
}

DMA_abc & DMA_abc::operator = (const DMA_abc &rs)
{
	if (this == &rs)
		return *this;
	delete[]label;
	label = new char[strlen(rs.label) + 1];
	strcpy_s(label, strlen(rs.label) + 1, rs.label);
	rating = rs.rating;
	return *this;
}

void DMA_abc::View()const
{
	std::cout << "label: " << label << '\n';
	std::cout << "rating: " << rating << '\n';
}

std::ostream & operator<<(std::ostream & os, const DMA_abc & rs)
{
	os << rs.label << '\n';
	os << rs.rating << '\n';
	return os;
}




/*base DMA*/
baseDMA::~baseDMA() {
}

baseDMA& baseDMA::operator = (const baseDMA&rs){
	if (this == &rs)
		return *this;
	DMA_abc::operator=(rs);
	return *this;
}

void baseDMA::View()const {

	DMA_abc::View();
}

std::ostream & operator<<(std::ostream & os, const baseDMA & rs)
{
	os << (const DMA_abc &)rs;
	return os;
}


/*lacks DMA*/
lacksDMA::lacksDMA(const char *c, const char*l, int r):DMA_abc(l,r){
	color = new char[strlen(c) + 1];
	strcpy_s(color, strlen(c) + 1, c);
}

lacksDMA::lacksDMA(const char * c ,const DMA_abc & rs):DMA_abc(rs){
	color = new char[strlen(c) + 1];
	strcpy_s(color, strlen(c) + 1, c);
}


lacksDMA::lacksDMA(const lacksDMA & rs) :DMA_abc(rs) {

	color = new char[strlen(rs.color) + 1];
	strcpy_s(color, strlen(rs.color) + 1, rs.color);
}



lacksDMA:: ~lacksDMA()
{
	delete[]color;
}

lacksDMA& lacksDMA::operator = (const lacksDMA&rs)
{
	if (this == &rs)
		return *this;
	DMA_abc::operator=(rs);
	delete[]color;
	color = new char[strlen(rs.color) + 1];
	strcpy_s(color, strlen(rs.color) + 1, rs.color);
	return *this;
}
void lacksDMA::View()const {
	DMA_abc::View();
	std::cout << "color: " << color << '\n';
}

std::ostream & operator<<(std::ostream & os, const lacksDMA & rs)
{
	
	os << rs.color << '\n';
	os << (const DMA_abc&)rs;
	return os;
}

/*hasDMA*/

hasDMA::hasDMA(const char *s, const char*l, int r) :DMA_abc(l, r) {
	style = new char[strlen(s) + 1];
	strcpy_s(style, strlen(s) + 1, s);
}

hasDMA::hasDMA(const char *s,const DMA_abc &rs):DMA_abc(rs) {
	style = new char[strlen(s) + 1];
	strcpy_s(style, strlen(s) + 1, s);
}

hasDMA::hasDMA(const hasDMA &rs) : DMA_abc(rs) {
	style = new char[strlen(rs.style) + 1];
	strcpy_s(style, strlen(rs.style) + 1, rs.style);
}

hasDMA:: ~hasDMA()
{
	delete[]style;
}

hasDMA& hasDMA::operator = (const hasDMA&rs)
{
	if (this == &rs)
		return *this;
	DMA_abc::operator=(rs);
	delete[]style;
	style = new char[strlen(rs.style) + 1];
	strcpy_s(style, strlen(rs.style) + 1, rs.style);
	return *this;
}
void hasDMA::View()const {
	DMA_abc::View();
	std::cout << "style: " << style << '\n';
}

std::ostream & operator<<(std::ostream & os, const hasDMA & rs)
{

	os << rs.style << '\n';
	os << (const DMA_abc&)rs;
	return os;
}
