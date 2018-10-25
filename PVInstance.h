#pragma once
#include "instance.h"

class PVInstance :
	public Instance
{
public:
	PVInstance(void);
	~PVInstance(void);
	PVInstance(const PVInstance &oinst);
	virtual std::vector<PROPGRIDITEM> getProperties();
	virtual void PropUpdate(LPPROPGRIDITEM &pItem);
};