#include "log.h"
#include "components/moveDirectionals.hpp"
#include "keyword.hpp"
#include "vector.hpp"
#include "game.hpp"
#include "tilemap.hpp"

bool MoveDirectionals::update(){

	bool keyFlag = false;

    if(Input::keyPressed(Input::UP))
    {
        (dynamic_cast<Player *>(m_game_object))->moveUp();
        keyFlag=true;
    }
    if(Input::keyPressed(Input::DOWN))
    {

        (dynamic_cast<Player *>(m_game_object))->moveDown();
        keyFlag=true;
    }
    if(Input::keyPressed(Input::RIGHT))
    {
       
        (dynamic_cast<Player *>(m_game_object))->moveRight();
        keyFlag=true;
    }
    if(Input::keyPressed(Input::LEFT))
    {
        
        (dynamic_cast<Player *>(m_game_object))->moveLeft();
        keyFlag=true;
    }

    if(!keyFlag){
        Vector2D nulo(0,0);
        m_game_object->physics.velocity = nulo;
    }
	return true;
}