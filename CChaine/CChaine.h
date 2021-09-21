#ifndef CCHAINE_H
#define CCHAINE_H
#include <iostream>
using namespace std; 

class CChaine {

private:
	char* m_strCChaine;
	int m_uiSize;

public:
	/**
 * Constructor
 */
	CChaine(const char* chaine);
	CChaine(const CChaine&);
	//CChaine(const CChaine&chaine8,);
	CChaine();
	void operator=(const CChaine&);
	int getLen();

	void show();

	void upper();

	~CChaine();

};

#endif
