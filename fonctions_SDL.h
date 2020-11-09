/**
	*\file fonctions_SDL.h
	*\author Chloe Mathias
*/

#ifndef FONCTIONSSDL_H
#define FONCTIONSSDL_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include "personnages.h"
#include "salle.h"

struct textures_s{

	SDL_Texture * fond;
	SDL_Texture * sprites;

};

typedef struct textures_s ressources;

void init_textures(ressources * textures, SDL_Renderer* renderer);

void liberer_textures(ressources * textures);

void liberer_texture(SDL_Texture * texture);

SDL_Texture* charger_image (const char* nomfichier, SDL_Renderer*renderer);

SDL_Texture * charger_image_transparente(const char* nomfichier,SDL_Renderer* renderer,Uint8 r, Uint8 g, Uint8 b) ;

SDL_Texture* charger_texte(const char* message, SDL_Renderer* renderer,TTF_Font *font, SDL_Color color) ;

void affiche_joueur(SDL_Renderer* renderer,SDL_Texture * perso,persos_s donnees_perso,int i);

/**
	* \brief Affiche l'image correspondante à une salle
	* \param renderer Surface de l'écran de joueur
	* \param image_salle Texture de l'image que l'on veut afficher
	* \param salle Salle que l'on veut afficher
*/
void affiche_salle(SDL_Renderer* renderer, SDL_Texture* image_salle, salle_t salle);


int * texture_salle (salle_t salle);
#endif