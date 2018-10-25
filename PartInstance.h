#pragma once
#include "PVInstance.h"
#include "Enum.h"

class PartInstance : public PVInstance
{
public:
	PartInstance(void);
	PartInstance(const PartInstance &oinst);
	Instance* clone() const { return new PartInstance(*this); }
	~PartInstance(void);
	virtual void render(RenderDevice*);
	Vector3 velocity;
	Enum::SurfaceType::Value top;
	Enum::SurfaceType::Value front;
	Enum::SurfaceType::Value right;
	Enum::SurfaceType::Value back;
	Enum::SurfaceType::Value left;
	Enum::SurfaceType::Value bottom;
	Enum::Shape::Value shape;
	CoordinateFrame cFrame;
	Color3 color;
	Vector3 getPosition();
	void setPosition(Vector3);
	CoordinateFrame getCFrame();
	void setCFrame(CoordinateFrame);
	Box getBox();
	Box getScaledBox();
	CoordinateFrame getCFrameRenderBased();
	Vector3 getSize();
	void setSize(Vector3);
	bool canCollide;
	bool anchored;
	Vector3 rotVelocity;
	bool collides(Box);
	virtual std::vector<PROPGRIDITEM> getProperties();
	virtual void PropUpdate(LPPROPGRIDITEM &pItem);
private:
	Vector3 position;
	Vector3 size;
	GLfloat vertecies[96];
	bool changed;
	Box itemBox;
};
