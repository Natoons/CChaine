#include "CChaine.h"

CChaine::CChaine(const char* chaine) {
	cout << "je suis dans le constructeur"<< endl;
	// determination de la taille de la chaine
	m_uiSize = 0;
	unsigned int i = 0;
	while (chaine[m_uiSize] != '\0')
	{
		m_uiSize++;
	}

	// m_uiSize = strlen(chaine);

	m_strCChaine = new char[m_uiSize]; // on alloue m_uiSize caractére 
									// depuis le tas (heap)	
	// on copie tous les caractére de "chaine" dans le heap
	for (int i = 0; i < m_uiSize; i++)
	{
		m_strCChaine[i] = chaine[i];
	}
}
// constructeur copie : 
CChaine::CChaine(const CChaine& obj2)
{
	cout << "je suis dans le constructeur de copie" << endl;
	// on recopie "Tout ce qui fonctionne" 
	this->m_uiSize = obj2.m_uiSize;
	// allocation mémoire
	m_strCChaine = new char[m_uiSize]; // on alloue m_uiSize caractére 
									// depuis le tas (heap)
	// on copie tous les caractére de "chaine" dans le heap
	for (int i = 0; i < m_uiSize; i++)
	{
		m_strCChaine[i] = obj2.m_strCChaine[i];
	}
	//recopie la chaine
}

CChaine::CChaine()
{
	cout << "je suis un constructeur vide" << endl;
	this->m_strCChaine=nullptr;
	this->m_uiSize = 0;
}

/* void CChaine::operator=(const CChaine& chaine7)
{
	// 1. -- On affecte "Tout ce qui va bie" --
	this->m_uiSize = chaine7.m_uiSize;
	// 2. -- Allocation --
	m_strCChaine = new char[m_uiSize];
	// 3. -- Recopier la chaine --
	for (int i = 0; i < m_uiSize; i++)
	{
		m_strCChaine[i] = chaine7.m_strCChaine[i];
	}
}*/


const CChaine& CChaine::operator=(const CChaine& chaine7)
{
	if (this != &chaine7) // on compare les 2 objets si ils ont le même adresse. 
	{ 
		// 1. -- On affecte "Tout ce qui va bie" --
		this->m_uiSize = chaine7.m_uiSize;
		// 2. -- Allocation --
		if (this->m_strCChaine != nullptr)
		{
			delete[] this->m_strCChaine;
		}
		m_strCChaine = new char[m_uiSize];
		// 3. -- Recopier la chaine --
		for (int i = 0; i < m_uiSize; i++)
		{
			m_strCChaine[i] = chaine7.m_strCChaine[i];
		}
	}
	return *this;
}

int CChaine::getLen() const
{
	// TODO - implement CChaine::getLen
	return m_uiSize;
}

/*int CChaine::getLen() {
	// TODO - implement CChaine::getLen
	return m_uiSize;
}*/

void CChaine::show() const
{
	for (int i = 0; i < m_uiSize; i++)
	{
		cout << m_strCChaine[i];
	}
	cout << endl;
}


/*void CChaine::show() {
	for (int i = 0; i < m_uiSize; i++)
	{
		cout << m_strCChaine[i];
	}
	cout << endl;
}*/
void CChaine::upper() {
	for (int t = 0; t < m_uiSize; t++)
	{ 
	if (m_strCChaine[t] >= 'a'&& m_strCChaine[t]<='z')
	{
		m_strCChaine[t] = m_strCChaine[t] - ('a' - 'A');// 32;
	}
	}
}

CChaine::~CChaine() {
	cout << "je suis dans le déstructeur" << endl;
	if (m_strCChaine != nullptr)
	{
		delete[] this->m_strCChaine;
	}

}


