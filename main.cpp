#include "Shape.hpp"
#include <iostream>
#include <dlfcn.h>
#include <string>

#include <SFML/Window.hpp>

using namespace std;
int main(int argc, char **argv)
{
	//------------------------------ plugins loading
	void *hndl;
	maker_shape pMaker;
	// Ouverture de la librairie
	
	cout<<"Circle or Square?"<<endl;

	string s1 = "./lib";
	string s2;
	string s3 = ".so";

	cin>>s2;

	string sfinal = s1+s2+s3;
	cout<<"loading "<<sfinal<<"..."<<endl;

	// Ouverture de la librairie
	hndl = dlopen(sfinal.c_str(), RTLD_LAZY);

	if(hndl == NULL)
	{
		cerr << "dlopen : "<< dlerror() << endl;
		return(1);
	}
	// Chargement du créateur
	void *mkr = dlsym(hndl, "make_shape");
	if (mkr == NULL)
	{
  		cerr << "dlsym : " << dlerror() << endl;
  		return(1);
	}
	pMaker = (maker_shape)mkr;
	// Création, affichagedu cercle
	Shape *s = pMaker();
	

	//----------------------------------- SFML part

	sf::RenderWindow App(sf::VideoMode(220, 220, 32), "SFML Window");	bool Running = true;
	while (Running)
	{
		App.Clear(sf::Color(255,255,255));
		s->Draw(&App);
	    App.Display();
	}
	
	dlclose(hndl);

	return 0;
}
