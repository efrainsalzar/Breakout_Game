#pragma once
#include "GameObject.h"
#include "Movimiento.h"
class Ball :
    public GameObject
{
private:
	Movimiento* movimiento;

	Movimiento::Direccion direccion;

public:
	Ball(int _x, int _y, int _width, int _height, int  _speed, SDL_Color _color);
	Ball();
	~Ball();

	

	void update() override;
	void render(SDL_Renderer* _renderer) override;

	enum class Choque
	{
		ARRIBA,
		ABAJO,
		IZQUIERDA,
		DERECHA
	};

	void rebote(Movimiento::Direccion _direccion, Choque _choque);
};
