#pragma once

#include "Game.h"

class BiomeSystem : public artemis::EntityProcessingSystem {
public:
	BiomeSystem(Game &gamev);
	void DoBiomeChecks();
	void SetBiome( std::string biome );
	virtual void processEntity (artemis::Entity & e);
	virtual void processEntities( artemis::ImmutableBag<artemis::Entity*> &bag );
	void DrawBiomeInfo();
private:
	float atmosphere, temperature;
	Game &game;
	bool newBiome;
	sf::Text biomeText;
	std::string currentBiome;
	sf::Sprite biomeCursor;
};

