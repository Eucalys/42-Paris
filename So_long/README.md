# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    README.md                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnguyen <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/25 13:32:14 by cnguyen           #+#    #+#              #
#    Updated: 2022/01/25 13:50:22 by cnguyen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

So Long = jeu 2D basique (vue de haut ou de profil) dans lequel un
personnage doit s'enfuire de la zone donnee. 
Vous pouvez utiliser le personnage, les items et le décor de votre choix.

Le but du joueur est de ramasser tous les items présents sur la carte, puis de
s’échapper en empruntant le chemin le plus court possible.

Affichage player score et best score.

À chaque mouvement (haut, bas, droite, gauche -> W,A,S,D), 
le compte total de mouvement doit être affiché dans le shell.

Gestion :
- Ouverture et fermeture de fenetres (exit/esc key/croix de fermeture). 
- Doit rester fluide avec changement de fenetre et reduction, etc.
- Gestion des evenements : ramassage d'objet, obstacles/murs, et exit map.
- Gestion des couleurs
- Gestion des textures
- Map de jeu RECTANGULAIRE au format *.ber -> generation automatique avec les elements 
suivants :
	0 pour un emplacement vide,
	1 pour un mur,
	C pour un item à ramasser (c pour collectible),
	E pour une sortie,
	P pour la position de départ du personnage.


Elements Graphiques : les mures, les items a ramasser, l'espace vide, 
le personnage, l'entree et la sortie.

- tiles
- tilesets
- sprites
- sprite sheets

Sources Graphiques :
- itch.io

