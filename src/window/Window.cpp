#include "Window/Window.h"
#include <iostream>
#include <QtWidgets/QWidget>
#include <QtWidgets/QApplication>


void Dummy() { Window x; };


Window::Window(int argc, char *argv[]) 
{
	QApplication app(argc, argv);
	std::cout << "Window Ctor" << std::endl;
	QWidget s;
	s.show();
	app.exec();
}