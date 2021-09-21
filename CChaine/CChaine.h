#ifndef CCHAINE_H
#define CCHAINE_H

class CChaine {

private:
	const char* m_strCChaine;
	int m_uiSize;

public:
	/**
 * Constructor
 */
	CChaine(const char* chaine);
	int getLen();

	void show();

	void upper();


	~CChaine();

};

#endif
