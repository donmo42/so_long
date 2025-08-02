so_long
🧠 Pourquoi le projet s'appelle "so_long" ?

Le nom "so_long" est un jeu de mots basé sur l'expression anglaise "so long!", qui signifie "au revoir". D’après les informations fournies par 42, il s’agit simplement d’un exercice réputé long — d’où ce choix de nom.

🎯 Objectif du projet

<img src="Screencast from 07-31-2025 09_03_11 PM.gif" alt="Aperçu du jeu so_long" width="800" />

Le but de ce projet est de créer un petit jeu en 2D, en utilisant uniquement des fonctions de base (pas de bibliothèques externes), où un joueur peut se déplacer sur une carte, collecter des objets, et atteindre une sortie pour gagner.

C’est une introduction au graphisme, à la gestion d’événements clavier, et à la manipulation de fenêtres graphiques, grâce à la MiniLibX, une librairie graphique simple fournie par l'école 42.
🗺️ Description du jeu

    Le jeu est basé sur une carte (fichier .ber) représentée par des caractères :

        1 : mur

        0 : sol

        C : collectible

        E : sortie

        P : position initiale du joueur
        
        T: position initiale de l'enemi (s'il existe dans la map)

    Le joueur peut :

        se déplacer avec les touches ZQSD (ou WASD selon les claviers) pour le joueur 

        se déplacer avec les flèches  pour l'enemi 

        ramasser les collectibles (C)

        accéder à la sortie (E) seulement après avoir tout ramassé

    Le jeu doit :

        afficher chaque mouvement

        afficher une image différente pour chaque type d’objet (sprites)

        compter les déplacements du joueur

🛠️ Technologies et contraintes

    MiniLibX : utilisée pour afficher les images et gérer les événements clavier.
    💡 Important : Télécharge la MiniLibX adaptée à ton système (Linux ou macOS) depuis le dépôt officiel : https://github.com/42Paris/minilibx-linux ou https://github.com/42Paris/minilibx-macos. Une fois clonée, place le dossier dans ton projet sous le nom exact minilibx, afin que le programme puisse le trouver correctement pendant la compilation.
    
⚙️ Comment lancer le jeu
git clone [ttps://github.com/ton_user/so_long.git](https://github.com/donmo42/so_long.git)
cd so_long
make
./so_long ressources/map/valid/(nom de la map).ber

    Aucune bibliothèque externe n’est autorisée (SDL, SFML, etc.).

    Librairie : j’utilise ma propre version de la libft (ma librairie personnelle) que j’ai codée auparavant.

    Printfx : j’utilise également ma propre version de printf pour afficher du texte (aucun printf standard autorisé).

✅ Fonctionnalités à respecter (exigences de 42)

    Le jeu doit être en 2D (pas d'animation complexe).

    La fenêtre doit se fermer avec la croix ou la touche ESC.

    Gestion des erreurs (mauvais fichier, map invalide, etc.).

    Valider que la map est entourée de murs, contient au moins un E, un P et un ou plusieurs C.

📌 Remarques

    Toutes les fonctions de parsing, affichage, mouvements et nettoyage mémoire sont écrites from scratch.

    La map est vérifiée pour être valide et jouable.

    Ce projet est une excellente introduction à la gestion de fichiers, à la représentation graphique, et à la gestion d’événements clavier.

    
