#pragma once
#include <iostream>
#include <ctime>
class pryamoug
{
private:
	int vysota;
	int shyrina;
	pryamoug(int i);
	
public:
	static const int max_size=15;
	static int magicDiana;
	pryamoug();
	pryamoug(int vysota,int shyrina);
	pryamoug(pryamoug &v);
	~pryamoug();
	double get_vysota();
	double get_shyrina();
	double get_area();
	double get_perimetr();
	bool prvysota(int nvysota);
	bool prshyrina(int shyrina);
	void write_vysota();
	void write_shyrina();
	void write_area();
	void write_perimetr();
	static pryamoug* mass(int);
};