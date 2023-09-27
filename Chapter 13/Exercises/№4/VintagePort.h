#ifndef VINTAGEPORT_H_     
#define VINTAGEPORT_H_     
#include "port.h"

//-------------------------------------------------------------------------------------------------
class VintagePort : public Port // style ����������� = "vintage" 
{
private:
	char* nickname; // �.�. "The Noble", "Old Velvet" � �.�. 
	int year; 		// ��� ����� 
public:
	VintagePort();
	VintagePort(const char* br, int b, const char* nn, int y);
	VintagePort(const VintagePort & vp);
	~VintagePort() { delete[] nickname; }
	VintagePort & operator = (const VintagePort & vp);
	void Show() const;
	friend std::ostream & operator << (std::ostream & os, const VintagePort & vp);
};
//-------------------------------------------------------------------------------------------------
#endif // VINTAGEPORT_H_