#include "CChaine.h"

CChaine::CChaine(const char* chaine) {
	// TODO - implement CChaine::CChaine
	//determination de la taille de la chaine
	m_uiSize = 0;
	unsigned int i = 0;
	while (chaine[m_uiSize] != '\0')
	{
		m_uiSize++;
	}
	m_strCChaine = 0;

	// m_uiSize = strlen(chaine);
}

int CChaine::getLen() {
	// TODO - implement CChaine::getLen
	return m_uiSize;
	throw "Not yet implemented";
}

void CChaine::show() {
	// TODO - implement CChaine::show
	throw "Not yet implemented";
}

void CChaine::upper() {
	// TODO - implement CChaine::upper
	throw "Not yet implemented";
}

CChaine::~CChaine() {
	// TODO - implement CChaine::~CChaine
	throw "Not yet implemented";
}


